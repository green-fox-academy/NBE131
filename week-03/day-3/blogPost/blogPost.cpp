//
// Created by Dell on 2019. 07. 10..
//

#include "blogPost.h"

blogPost::blogPost(const std::string &authorName, const std::string &title, const std::string &text,
                   const std::vector<int> &date) : authorName(authorName), title(title), text(text), date(date)
{

}

const std::string &blogPost::getAuthorName() const
{
    return authorName;
}

const std::string &blogPost::getTitle() const
{
    return title;
}

const std::string &blogPost::getText() const
{
    return text;
}

const std::vector<int> &blogPost::getDate() const
{
    return date;
}
