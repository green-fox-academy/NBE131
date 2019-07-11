

#ifndef BLOGPOST_BLOGPOST_H
#define BLOGPOST_BLOGPOST_H
#include <string>
#include <vector>


class blogPost
{
public:
    blogPost(const std::string &authorName, const std::string &title, const std::string &text,
             const std::vector<int> &date);

    const std::string &getAuthorName() const;

    const std::string &getTitle() const;

    const std::string &getText() const;

    const std::vector<int> &getDate() const;


private:
    std::string authorName;
    std::string title;
    std::string text;
    std::vector<int> date;

};


#endif //BLOGPOST_BLOGPOST_H
