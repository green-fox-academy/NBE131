#include <iostream>


// Accidentally I got the wrong URL for a funny subreddit. It's probably "odds" and not "bots"
// Also, the URL is missing a crucial component, find out what it is and insert it too!


int main()
{

    std::string url("https//www.reddit.com/r/nevertellmethebots");
    url.replace (38, 4 , "odds");
    url.insert (5, ":");


    std::cout << url << std::endl;

    return 0;
}