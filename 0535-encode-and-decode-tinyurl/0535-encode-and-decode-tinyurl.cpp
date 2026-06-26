class Solution {
public:
    unordered_map <string, string> map;
    int temp = 0;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        temp++;
        map["http:tinyurl.com/" + to_string(temp)] = longUrl;
        return "http:tinyurl.com/" + to_string(temp);
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return map[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));