#include "GameTable.h"

namespace GameAPI {
    void GameTable::setup() {
        RE::TESDataHandler* handler = RE::TESDataHandler::GetSingleton();

        Timescale = handler->LookupForm<RE::TESGlobal>(0x00003A, "Skyrim.esm");

        ActorTypeNPC = handler->LookupForm<RE::BGSKeyword>(0x013794, "Skyrim.esm");
        Vampire = handler->LookupForm<RE::BGSKeyword>(0x0A82BB, "Skyrim.esm");
        ManakinRace = handler->LookupForm<RE::TESRace>(0x10760A, "Skyrim.esm");

        OStimImprovedCamSupport = handler->LookupForm<RE::TESGlobal>(0xDE6, "OStim.esp");

        OStimEmptyFaction = handler->LookupForm<RE::TESFaction>(0xDED, "OStim.esp");
    }
}