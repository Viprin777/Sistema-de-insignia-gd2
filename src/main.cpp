#include <Geode/Geode.hpp>
#include <Geode/modify/ProfilePage.hpp>

using namespace geode::prelude;

class $modify(CustomBadgeProfilePage, ProfilePage) {
    void loadPage() {
        ProfilePage::loadPage();

        if (!m_score) 
            
            if (badgeSprite) {
                badgeSprite->setScale(0.7f);
                badgeSprite->setPosition(ccp(240.f, 205.f));
                badgeSprite->setID("owner-developer-badge"_spr);
                
                mainLayer->addChild(badgeSprite, 10);
                log::info("Loaded Owner/Developer badge for {}", playerName);
            }
        }
    }
};
