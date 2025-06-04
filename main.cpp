#include <iostream>
#include <libxml/xmlversion.h>
#include <curl/curl.h>

int main() {
    std::cout << "=== Vulnerable Libraries Version Check ===" << std::endl;
    
    // Print libxml2 version
    std::cout << "libxml2 version: " << LIBXML_DOTTED_VERSION << std::endl;
    
    // Print libcurl version
    curl_version_info_data *curl_info = curl_version_info(CURLVERSION_NOW);
    std::cout << "libcurl version: " << curl_info->version << std::endl;
    
    std::cout << "\nBoth libraries loaded successfully!" << std::endl;
    std::cout << "Note: These may be vulnerable versions for testing purposes." << std::endl;
    
    return 0;
}
