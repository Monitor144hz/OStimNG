#pragma once

#include "GameAPI/GameActor.h"
#include "GameAPI/GameSex.h"

namespace OStim {
    class ThreadActor;
}

namespace Trait {
    struct ActorCondition {
    public:
        static ActorCondition create(GameAPI::GameActor actor);
        static ActorCondition create(OStim::ThreadActor* actor);
        static std::vector<ActorCondition> create(std::vector<GameAPI::GameActor> actors);

        std::string type = "npc";
        GameAPI::GameSex sex = GameAPI::GameSex::NONE;
        uint32_t requirements = 0;

        bool fulfills(ActorCondition conditions);

    private:
        static ActorCondition create(GameAPI::GameActor actor, OStim::ThreadActor* threadActor);
    };
}