#include <Geode/Geode.hpp>
#include <Geode/modify/ProfilePage.hpp>

using namespace geode::prelude;

class $modify(CustomBadgeProfilePage, ProfilePage) {
    void loadPage() {
        ProfilePage::loadPage();

        if (!m_score) return;

        std::string playerName = m_score->m_userName;
        
        // Coloca aquí tu nombre de usuario de Geometry Dash
        bool isOwnerOrDev = (playerName == "IndominusRex");

        if (isOwnerOrDev) {
            auto mainLayer = m_mainLayer;
            if (!mainLayer) return;

            // Creamos la badge con el sprite oficial de moderador de Geometry Dash
            auto badgeSprite = CCSprite::createWithSpriteFrameName("mod_badge_01_001.png");
            
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
