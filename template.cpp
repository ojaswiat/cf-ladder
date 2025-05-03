#include <bits/stdc++.h> // Include all standard headers
using namespace std;

// --------------------------- Macros ---------------------------
// Typing Shortcuts
#define int long long                // Default integer type as 64-bit
#define pb push_back                 // Shortcut for push_back
#define mp make_pair                 // Shortcut for make_pair
#define all(x) x.begin(), x.end()    // Shortcut for entire container
#define rall(x) x.rbegin(), x.rend() // Shortcut for reverse container
#define sz(x) (int)(x).size()        // Shortcut for container size
#define f first                      // Shortcut for .first
#define s second                     // Shortcut for .second

// Loops
#define rep(i, a, b) for (int i = a; i < b; ++i)  // Forward loop [a, b)
#define per(i, a, b) for (int i = a; i >= b; --i) // Reverse loop [a, b]
#define trav(a, x) for (auto &a : x)              // Range-based loop

// Output
#define endl '\n'                                 // Fast newline
#define yes cout << "YES\n"                       // Print YES
#define no cout << "NO\n"                         // Print NO
#define debug(x) cerr << #x << " = " << x << endl // Debugging to stderr

// ---------------------- Bitmask Macros ------------------------
// Bit operations (0-based index)
#define isOn(mask, i) ((mask) & (1LL << (i)))       // Check if i-th bit is 1
#define setBit(mask, i) ((mask) | (1LL << (i)))     // Set i-th bit to 1
#define clearBit(mask, i) ((mask) & ~(1LL << (i)))  // Clear i-th bit to 0
#define toggleBit(mask, i) ((mask) ^ (1LL << (i)))  // Flip i-th bit
#define lowbit(mask) ((mask) & -(mask))             // Lowest set bit
#define bitCount(mask) (__builtin_popcountll(mask)) // Count number of 1s
#define fullMask(n) ((1LL << (n)) - 1)              // n bits all set to 1

// ---------------------- Math/Vector Macros ------------------------
// Integer comparisons
#define MOD 1000000007LL                   // 1e9 + 7, common prime modulus
#define min2(a, b) ((a) < (b) ? (a) : (b)) // Minimum of 2 values
#define max2(a, b) ((a) > (b) ? (a) : (b)) // Maximum of 2 values

// Vector/array operations
#define minv(v) (*min_element(all(v)))    // Minimum in vector
#define maxv(v) (*max_element(all(v)))    // Maximum in vector
#define sumv(v) (accumulate(all(v), 0LL)) // Sum of vector elements
#define avgv(v) (sumv(v) / (int)v.size()) // Average (integer division)

// --------------------------- Typedefs ---------------------------
typedef long long ll;           // Alias for long long
typedef unsigned long long ull; // Alias for unsigned long long
typedef pair<int, int> pii;     // Pair of ints
typedef vector<int> vi;         // Vector of ints
typedef vector<pii> vpii;       // Vector of pairs
typedef vector<vi> vvi;         // 2D vector

// --------------------------- Constants ---------------------------
const int INF = 1e18;       // Large number (infinity)
const int MOD = 1e9 + 7;    // Common modulus
const int MOD2 = 998244353; // Alternate modulus
const int N = 2e5 + 5;      // Max array size

// --------------------------- Modular Arithmetic ---------------------------
// Safe mod that handles negatives too
inline int mod(int a, int m = MOD)
{
    return ((a % m) + m) % m;
}

// Modular addition
inline int mod_add(int a, int b, int m = MOD)
{
    return mod(mod(a, m) + mod(b, m), m);
}

// Modular subtraction
inline int mod_sub(int a, int b, int m = MOD)
{
    return mod(mod(a, m) - mod(b, m), m);
}

// Modular multiplication
inline int mod_mul(int a, int b, int m = MOD)
{
    return mod(mod(a, m) * mod(b, m), m);
}

// Modular exponentiation
inline int mod_pow(int a, int b, int m = MOD)
{
    int res = 1;
    a = mod(a, m);
    while (b > 0)
    {
        if (b & 1)
            res = mod_mul(res, a, m);
        a = mod_mul(a, a, m);
        b >>= 1;
    }
    return res;
}

// Modular inverse (only if m is prime)
inline int mod_inv(int a, int m = MOD)
{
    return mod_pow(a, m - 2, m);
}

// --------------------------- Fast I/O ---------------------------
void fast_io()
{
    ios::sync_with_stdio(false); // Turn off sync with C I/O
    cin.tie(nullptr);
    cout.tie(nullptr); // Untie cin and cout
}

// --------------------------- Utility Functions ---------------------------
// GCD (Euclidean algorithm)
int gcd(int a, int b)
{
    return b ? gcd(b, a % b) : a;
}

// Binary exponentiation (a^b % m)
int modpow(int a, int b, int m = MOD)
{
    int res = 1;
    a %= m;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

// --------------------------- Solve Function ---------------------------
void solve()
{
    // Sample usage
    vi v = {1, 4, 2, 10};
    debug(minv(v)); // Output: 1
    debug(maxv(v)); // Output: 10
    debug(sumv(v)); // Output: 17
    debug(avgv(v)); // Output: 4

    int mask = 0;
    mask = setBit(mask, 2); // Set bit 2 → 0b100
    debug(mask);            // Output: 4
}

// --------------------------- Main Function ---------------------------
int32_t main()
{
    fast_io(); // Enable fast input/output
    int T = 1;
    // cin >> T;                // Uncomment for multiple test cases
    while (T--)
        solve(); // Run each test case
    return 0;
}
