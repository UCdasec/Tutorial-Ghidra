// Updated by konar on 6/30/2025.
// Medium Difficulty Ghidra Exercise
//
#include <iostream>
#include <string>
#include <vector>

// Decoy function it is not useful
void admin_access()
{
    std::cout << "Administrative access granted!\n";
}

// Another decoy
void debug_mode()
{
    std::cout << "Debug mode activated!\n";
}

// The real success function
void unlock_vault()
{
    std::cout << "Vault unlocked! You've finished your second RE!\n";
}

// caesar cipher decoder
std::string caesar_decode(const std::string &encoded, int shift)
{
    std::string decoded;
    for (char c : encoded)
    {
        if (c >= 'A' && c <= 'Z')
        {
            decoded += ((c - 'A' - shift + 26) % 26) + 'A';
        }
        else if (c >= 'a' && c <= 'z')
        {
            decoded += ((c - 'a' - shift + 26) % 26) + 'a';
        }
        else
        {
            decoded += c;
        }
    }
    return decoded;
}

// Fake password checker that always fails
bool check_admin_pass(const std::string &input)
{
    return input == "admin123" && false; // Always false due to && false
}

// Another fake checker
bool check_debug_pass(const std::string &input)
{
    std::string fake_target = "debugger";
    return input == fake_target && input.length() > 100; // Impossible condition
}

// Real password validation with two stages
bool validate_access_code(const std::string &input)
{
    // Stage 1: Length check (obfuscated)
    int required_length = 5 + 3 - 1; // 7
    if (input.length() != required_length)
    {
        return false;
    }

    // Stage 2: Caesar cipher check
    // Target password is "R3v3rs3" but encoded with shift 13: "E3i3ef3"
    std::string encoded_target = "E3i3ef3";
    std::string decoded_input = caesar_decode(input, 13);

    return decoded_input == "R3v3rs3";
}

// Fixed checksum validation - now checks decoded string
bool secondary_check(const std::string &input)
{
    // Decode the input first
    std::string decoded_input = caesar_decode(input, 13);

    int sum = 0;
    for (char c : decoded_input)
    {
        sum += static_cast<int>(c);
    }
    // Sum of ASCII values for "R3v3rs3" is: 82+51+118+51+114+115+51 = 582
    return sum == (600 - 18); // slight obfuscated again (582)
}

int main()
{
    std::string user_input;
    int attempts = 0;
    const int max_attempts = 3;

    std::cout << "===||| Secure Vault System |||===\n";
    std::cout << "Enter the access code to enter...\n";

    while (attempts < max_attempts)
    {
        std::cout << "Access Code: ";
        std::cin >> user_input;
        attempts++;

        // Call fake validators first
        if (attempts == 1)
        {
            check_admin_pass(user_input);
        }
        check_debug_pass(user_input);

        // The real validation
        if (validate_access_code(user_input))
        {
            if (secondary_check(user_input))
            {
                std::cout << "Access granted!\n";
                unlock_vault();
                break;
            }
            else
            {
                std::cout << "Secondary validation failed!\n";
            }
        }
        else
        {
            std::cout << "Invalid access code. ";
            std::cout << "Attempts remaining: " << (max_attempts - attempts) << "\n\n";
        }

        if (attempts >= max_attempts)
        {
            std::cout << "Vault locked. Too many failed attempts.\n";
            std::cout << "Please restart the process\n";
        }
    }

    std::cout << "\nPress Enter to exit...";
    std::cin.ignore();
    std::cin.get();
    return 0;
}