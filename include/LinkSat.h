#pragma once

#include <ILink.h>
#include <diff/Component.h>

class LinkSat : public diff::Component<LinkSat, diff::as<ILink>> {
public:
    LinkSat();
    virtual ~LinkSat();

    bool send(const std::string &message) override;
};
