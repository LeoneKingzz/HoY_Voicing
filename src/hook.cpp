#include "hook.h"

namespace hooks
{
    RE::TESForm;
    void on_animation_event::GetEquippedShout(RE::Actor *actor, bool SpellFire){
        auto limboshout = actor->GetActorRuntimeData().selectedPower;

        if (limboshout && limboshout->Is(RE::FormType::Shout))
        {
            auto data = RE::TESDataHandler::GetSingleton();
            bool IsActorTypeFelldir = actor->HasKeywordString("HoY_Felldir");
            bool IsActorTypeGreyBeard = actor->HasKeywordString("HoY_GreyBeard");
            bool IsActorTypeMiraak = actor->HasKeywordString("HoY_Miraak");
            bool IsActorTypeGormlaith = actor->HasKeywordString("HoY_Gormlaith");
            bool IsActorTypeHakon = actor->HasKeywordString("HoY_Hakon");
            bool IsActorTypeUlfric = actor->HasKeywordString("HoY_Ulfric");
            bool IsActorTypeTsun = actor->HasKeywordString("HoY_Tsun");
            bool IsActorTypeEbonyWarrior = actor->HasKeywordString("HoY_EbonyWarrior");

            std::string_view Lsht = (clib_util::editorID::get_editorID(limboshout)).data();
            logger::info("Actor {} Shout {}"sv, actor->GetName(), Lsht);
            
            switch (hash(Lsht.data(), Lsht.size()))
            {
            case "ks_DragonFlameWaveShoutALDUIN"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8A0, "Heroes of Yore.esp")));
                } else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0xA8C, "Heroes of Yore.esp")));
                }
                break;

            case "005SummonShouts"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x81D, "Heroes of Yore.esp")));
                } else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x81C, "Heroes of Yore.esp")));
                }
                break;

            case "005StormShoutsDECIEVE"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x9CC, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x82D, "Heroes of Yore.esp")));
                }
                break;

            case "005SahloknirStormShout"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x82E, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x82D, "Heroes of Yore.esp")));
                }
                break;

            case "005StormShoutsBLOOD"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x949, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x948, "Heroes of Yore.esp")));
                }
                break;
            
            case "005UniqueBreathShouts"_h:
            case "005UniqueBreathShoutsALDUIN"_h:
            case "005UniqueBreathShoutsODAH"_h:
            case "005UniqueBreathShoutsPAAR"_h:
                if (SpellFire){
                    if (IsActorTypeFelldir){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8F3, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8F9, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGormlaith){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x903, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGreyBeard){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8FF, "Heroes of Yore.esp")));
                    }
                    
                }else{
                    if (IsActorTypeFelldir){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8F2, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8F8, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGormlaith){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x902, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGreyBeard){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8FE, "Heroes of Yore.esp")));
                    }
                }
                break;

            case "005VolleyBreathShouts"_h:
            case "005VolleyBreathShoutsALDUIN"_h:
            case "005VolleyBreathShoutsODAH"_h:
            case "005VolleyBreathShoutsPAAR"_h:
                if (SpellFire){
                    if (IsActorTypeFelldir){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8F1, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8F7, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGormlaith){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x901, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGreyBeard){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8FD, "Heroes of Yore.esp")));
                    }
                    
                }else{
                    if (IsActorTypeFelldir){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8F0, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8F6, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGormlaith){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x900, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGreyBeard){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8FC, "Heroes of Yore.esp")));
                    }
                }
                break;

            case "PaarthurnaxElementalFury"_h:
                if (SpellFire){
                    util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8E3, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8E2, "Heroes of Yore.esp")));
                }
                break;

            case "PaarthurnaxWhirlwindTempest"_h:
                if (SpellFire){
                    util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8E1, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8E0, "Heroes of Yore.esp")));
                }
                break;

            case "ks_DragonMoonBlast"_h:
            case "ks_DragonMoonBlastALDUIN"_h:
                if (SpellFire){
                    if (IsActorTypeFelldir){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8D1, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8C4, "Heroes of Yore.esp")));
                    }

                }else{
                    if (IsActorTypeFelldir){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8D0, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8C3, "Heroes of Yore.esp")));
                    }
                }
                break;

            case "005StormShoutsFROST"_h:
            case "zz005AlduinFroststorms"_h:
                if (SpellFire){
                    if (IsActorTypeFelldir){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8CF, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8C2, "Heroes of Yore.esp")));
                    }
                }else{
                    if (IsActorTypeFelldir){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8CE, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8C1, "Heroes of Yore.esp")));
                    }
                }
                break;

            case "zz05AlduinFirestorms"_h:
            case "dunCGDragonStormCallShout"_h:
            case "MQ206AlduinFirestormShout"_h:
            case "005StormShoutsFIRE"_h:
                if (SpellFire){
                    if (IsActorTypeFelldir){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x859, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8A8, "Heroes of Yore.esp")));
                    }
                }else{
                    if (IsActorTypeFelldir){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x858, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8A7, "Heroes of Yore.esp")));
                    }
                }
                break;

                RE::BShkbAnimationGraph;

            case "zz005DevourSoul_Alduin"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8BE, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8BD, "Heroes of Yore.esp")));
                }
                break;

            case "005StormShoutsSHOCK"_h:
            case "zz005AlduinLightningstorms"_h:
                if (SpellFire){
                    if (IsActorTypeFelldir){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x832, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8BC, "Heroes of Yore.esp")));
                    }
                }else{
                    if (IsActorTypeFelldir){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x831, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8BB, "Heroes of Yore.esp")));
                    }
                }
                break;

            case "ks_DragonCycloneShout"_h:
            case "ks_DragonCycloneShoutALDUIN"_h:
            case "ks_DragonCycloneShoutODAH"_h:
            case "ks_DragonCycloneShoutPAAR"_h:
                if (SpellFire){
                    if (IsActorTypeFelldir){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x837, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8B6, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGormlaith){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x890, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGreyBeard){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8DF, "Heroes of Yore.esp")));
                    }
                    
                }else{
                    if (IsActorTypeFelldir){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x836, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8B5, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGormlaith){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x88F, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGreyBeard){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8DE, "Heroes of Yore.esp")));
                    }
                }
                break;

            case "ks_DragonDrainVitalityShout"_h:
            case "ks_DragonDrainVitalityShoutALDUIN"_h:
            case "ks_DragonDrainVitalityShoutODAH"_h:
                if (SpellFire){
                    if (IsActorTypeFelldir){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x820, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8B4, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGormlaith){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x88E, "Heroes of Yore.esp")));
                    }
                }else{
                    if (IsActorTypeFelldir){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x81F, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8B3, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGormlaith){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x88D, "Heroes of Yore.esp")));
                    }
                }
                break;

            case "KS_DLC2BendWillShout_Alduin"_h:
                if (SpellFire){
                    util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0xA81, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8AD, "Heroes of Yore.esp")));
                }
                break;

            case "Serio_EDR_GravityBlastShout"_h:
            case "Serio_EDR_GravityBlastShoutALDUIN"_h:
            case "Serio_EDR_GravityBlastShoutODAH"_h:
            case "Serio_EDR_GravityBlastShoutPAAR"_h:
                if (SpellFire){
                    if (IsActorTypeFelldir){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x828, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8AE, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGormlaith){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x888, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGreyBeard){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8DB, "Heroes of Yore.esp")));
                    }
                    
                }else{
                    if (IsActorTypeFelldir){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x827, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8AD, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGormlaith){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x887, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGreyBeard){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8DA, "Heroes of Yore.esp")));
                    }
                }
                break;

            case "Serio_EDR_BackfireRecoilShout"_h:
            case "Serio_EDR_BackfireRecoilShoutALDUIN"_h:
            case "Serio_EDR_BackfireRecoilShoutODAH"_h:
            case "Serio_EDR_BackfireRecoilShoutPAAR"_h:
                if (SpellFire){
                    if (IsActorTypeFelldir){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x82A, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8AC, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGormlaith){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x886, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGreyBeard){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8D9, "Heroes of Yore.esp")));
                    }
                    
                }else{
                    if (IsActorTypeFelldir){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x829, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8AB, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGormlaith){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x885, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGreyBeard){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8D8, "Heroes of Yore.esp")));
                    }
                }
                break;

            case "ks_DragonBecomeEtherealShout"_h:
            case "ks_DragonBecomeEtherealShoutALDUIN"_h:
            case "ks_DragonBecomeEtherealShoutODAH"_h:
            case "ks_DragonBecomeEtherealShoutPAAR"_h:
                if (SpellFire){
                    if (IsActorTypeFelldir){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x834, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8A6, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGormlaith){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x880, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGreyBeard){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8D5, "Heroes of Yore.esp")));
                    }
                    
                }else{
                    if (IsActorTypeFelldir){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x833, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8A5, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGormlaith){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x87F, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGreyBeard){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8D4, "Heroes of Yore.esp")));
                    }
                }
                break;

            case "MQ101DragonUnrelentingForceShout"_h:
            case "Serio_EDR_UnrelentingForceShout"_h:
            case "Serio_EDR_UnrelentingForceShoutALDUIN"_h:
            case "Serio_EDR_UnrelentingForceShoutODAH"_h:
            case "Serio_EDR_UnrelentingForceShoutPAAR"_h:
            case "ks_DragonUnrelentingForceAreaShout"_h:
            case "ks_DragonUnrelentingForceAreaShoutALDUIN"_h:
            case "ks_DragonUnrelentingForceAreaShoutODAH"_h:
            case "ks_DragonUnrelentingForceAreaShoutPAAR"_h:
                if (SpellFire){
                    if (IsActorTypeFelldir){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x16E53, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x10FF06, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGormlaith){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x874, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGreyBeard){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x16E27, "Heroes of Yore.esp")));
                    }
                    
                }else{
                    if (IsActorTypeFelldir){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x16E50, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x10FF05, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGormlaith){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x873, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGreyBeard){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x16E26, "Heroes of Yore.esp")));
                    }
                }
                break;

            case "ks_DragonDismayAreaShout"_h:
            case "ks_DragonDismayAreaShoutALDUIN"_h:
            case "ks_DragonDismayAreaShoutODAH"_h:
            case "ks_DragonDismayAreaShoutPAAR"_h:
                if (SpellFire){
                    if (IsActorTypeFelldir){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x16E69, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x10FF04, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGormlaith){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x876, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGreyBeard){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x16E29, "Heroes of Yore.esp")));
                    }
                    
                }else{
                    if (IsActorTypeFelldir){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x16E59, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x10FF03, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGormlaith){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x875, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGreyBeard){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x16E28, "Heroes of Yore.esp")));
                    }
                }
                break;

            case "ks_DragonIceFormShout"_h:
            case "ks_DragonIceFormShoutALDUIN"_h:
            case "ks_DragonIceFormShoutODAH"_h:
            case "ks_DragonIceFormShoutPAAR"_h:
            case "005FrostForgetShouts"_h:
            case "005FrostForgetShoutsALDUIN"_h:
            case "005FrostForgetShoutsODAH"_h:
            case "005FrostForgetShoutsPAAR"_h:
                if (SpellFire){
                    if (IsActorTypeFelldir){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x16E6F, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x10FF02, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGormlaith){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x878, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGreyBeard){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x16E3C, "Heroes of Yore.esp")));
                    }
                    
                }else{
                    if (IsActorTypeFelldir){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x16E6B, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x10FF01, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGormlaith){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x877, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGreyBeard){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x16E2A, "Heroes of Yore.esp")));
                    }
                }
                break;

            case "ks_DragonDisarmShout"_h:
            case "ks_DragonDisarmShoutALDUIN"_h:
            case "ks_DragonDisarmShoutODAH"_h:
            case "ks_DragonDisarmShoutPAAR"_h:
                if (SpellFire){
                    if (IsActorTypeFelldir){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x16E7A, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x10FF00, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGormlaith){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x87A, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGreyBeard){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x16E44, "Heroes of Yore.esp")));
                    }
                    
                }else{
                    if (IsActorTypeFelldir){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x16E79, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x10FEFF, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGormlaith){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x879, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGreyBeard){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x16E3D, "Heroes of Yore.esp")));
                    }
                }
                break;

            case "L_DragonFireBreathShoutDRAGON"_h:
            case "L_DragonFireBreathShoutALDUIN2"_h:
            case "L_DragonFireBreathShoutODAH"_h:
            case "L_DragonFireBreathShoutPAAR"_h:
            case "L_DragonFireBallShout"_h:
            case "L_DragonFireBallShoutALDUIN2"_h:
            case "L_DragonFireBallShoutODAH"_h:
            case "L_DragonFireBallShoutPAAR"_h:
            case "ks_DragonFlameWaveShout"_h:
            case "ks_DragonFlameWaveShoutODAH"_h:
            case "ks_DragonFlameWaveShoutPAAR"_h:
                if (SpellFire){
                    if (IsActorTypeFelldir){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x16ED0, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x10F563, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGormlaith){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x87C, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGreyBeard){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x16E4E, "Heroes of Yore.esp")));
                    }
                    
                }else{
                    if (IsActorTypeFelldir){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x16E91, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x10F562, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGormlaith){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x87B, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGreyBeard){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x16E46, "Heroes of Yore.esp")));
                    }
                }
                break;

            case "L_DragonFrostBreathShout"_h:
            case "L_DragonFrostBreathShoutALDUIN"_h:
            case "L_DragonFrostBreathShoutODAH"_h:
            case "L_DragonFrostBreathShoutPAAR"_h:
            case "L_DragonFrostIceStormShout"_h:
            case "L_DragonFrostIceStormShoutALDUIN"_h:
            case "L_DragonFrostIceStormShoutODAH"_h:
            case "L_DragonFrostIceStormShoutPAAR"_h:
                if (SpellFire){
                    if (IsActorTypeFelldir){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x81B, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8A4, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGormlaith){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x87E, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGreyBeard){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8D3, "Heroes of Yore.esp")));
                    }
                    
                }else{
                    if (IsActorTypeFelldir){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x81A, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8A3, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGormlaith){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x87D, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGreyBeard){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8D2, "Heroes of Yore.esp")));
                    }
                }
                break;

            case "Serio_EDR_ChainSuppressionShout"_h:
            case "Serio_EDR_ChainSuppressionShoutALDUIN"_h:
            case "Serio_EDR_ChainSuppressionShoutODAH"_h:
            case "Serio_EDR_ChainSuppressionShoutPAAR"_h:
                if (SpellFire){
                    if (IsActorTypeFelldir){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x826, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8AA, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGormlaith){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x884, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGreyBeard){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8D7, "Heroes of Yore.esp")));
                    }
                    
                }else{
                    if (IsActorTypeFelldir){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x825, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8A9, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGormlaith){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x883, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGreyBeard){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8D6, "Heroes of Yore.esp")));
                    }
                }
                break;

            case "Serio_EDR_StaggerSpikesShout"_h:
            case "Serio_EDR_StaggerSpikesShoutALDUIN"_h:
            case "Serio_EDR_StaggerSpikesShoutODAH"_h:
            case "Serio_EDR_StaggerSpikesShoutPAAR"_h:
                if (SpellFire){
                    if (IsActorTypeFelldir){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x824, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8B0, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGormlaith){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x88A, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGreyBeard){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8DD, "Heroes of Yore.esp")));
                    }
                    
                }else{
                    if (IsActorTypeFelldir){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x823, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8AF, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGormlaith){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x889, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGreyBeard){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8DC, "Heroes of Yore.esp")));
                    }
                }
                break;

            case "ks_DragonMarkedforDeathShout"_h:
            case "ks_DragonMarkedforDeathShoutALDUIN"_h:
            case "ks_DragonMarkedforDeathShoutODAH"_h:
            case "Serio_EDR_MarkedForDeathShout"_h:
            case "Serio_EDR_MarkedForDeathShoutALDUIN"_h:
            case "Serio_EDR_MarkedForDeathShoutODAH"_h:
                if (SpellFire){
                    if (IsActorTypeFelldir){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x82C, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8B2, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGormlaith){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x88C, "Heroes of Yore.esp")));
                    }
                }else{
                    if (IsActorTypeFelldir){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x82B, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8B1, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGormlaith){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x88B, "Heroes of Yore.esp")));
                    }
                }
                break;

            case "L_DragonShockBreathShout"_h:
            case "L_DragonShockBreathShoutALDUIN2"_h:
            case "L_DragonShockBallShout"_h:
            case "L_DragonShockBallShoutALDUIN2"_h:
                if (SpellFire){
                    if (IsActorTypeFelldir){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x830, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8B8, "Heroes of Yore.esp")));
                    }
                }else{
                    if (IsActorTypeFelldir){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x82F, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8B7, "Heroes of Yore.esp")));
                    }
                }
                break;

            case "ks_DragonSoulTearShout"_h:
            case "ks_DragonSoulTearShout_ALDUIN"_h:
                if (SpellFire){
                    if (IsActorTypeFelldir){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x822, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8BA, "Heroes of Yore.esp")));
                    }
                }else{
                    if (IsActorTypeFelldir){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x821, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8B9, "Heroes of Yore.esp")));
                    }
                }
                break;

            case "Serio_EDR_DevourMoonLightShout"_h:
            case "Serio_EDR_DevourMoonLightShoutALDUIN"_h:
            case "Serio_EDR_DevourMoonLightShoutODAH"_h:
                if (SpellFire){
                    if (IsActorTypeFelldir){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8C9, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8C0, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGormlaith){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8C6, "Heroes of Yore.esp")));
                    }
                }else{
                    if (IsActorTypeFelldir){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8C8, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8BF, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGormlaith){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8C5, "Heroes of Yore.esp")));
                    }
                }
                break;

            case "005StormShoutsALLD"_h:
                if (SpellFire){
                    util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8CB, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8CA, "Heroes of Yore.esp")));
                }
                break;

            case "Serio_EDR_StormBarrageShout"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8CD, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8CC, "Heroes of Yore.esp")));
                }
                break;

            case "PaarthurnaxClearSkies"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8E5, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8E4, "Heroes of Yore.esp")));
                }
                break;

            case "PaarthurnaxBattleFury"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x90D, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x90C, "Heroes of Yore.esp")));
                }
                break;

            case "005ShockForgetShouts"_h:
            case "005ShockForgetShoutsALDUIN"_h:
                if (SpellFire){
                    if (IsActorTypeFelldir){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8F5, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8FB, "Heroes of Yore.esp")));
                    }
                }else{
                    if (IsActorTypeFelldir){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8F4, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x8FA, "Heroes of Yore.esp")));
                    }
                }
                break;

            case "005FireForgetShouts"_h:
            case "005FireForgetShoutsALDUIN"_h:
            case "005FireForgetShoutsODAH"_h:
            case "005FireForgetShoutsPAAR"_h:
                if (SpellFire){
                    if (IsActorTypeFelldir){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x90B, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x909, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGormlaith){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x905, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGreyBeard){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x907, "Heroes of Yore.esp")));
                    }
                    
                }else{
                    if (IsActorTypeFelldir){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x90A, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeMiraak){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x908, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGormlaith){
                        util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x904, "Heroes of Yore.esp")));
                    }
                    if (IsActorTypeGreyBeard){
                        util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x906, "Heroes of Yore.esp")));
                    }
                }
                break;
            }
        }
       
    }


	void on_animation_event::ProcessEvent(RE::BSTEventSink<RE::BSAnimationGraphEvent>* a_sink, RE::BSAnimationGraphEvent* a_event, RE::BSTEventSource<RE::BSAnimationGraphEvent>* a_eventSource)
	{
		if (!a_event->holder) {
			return;
		}
		std::string_view eventTag = a_event->tag.data();
		RE::Actor* actor = const_cast<RE::TESObjectREFR*>(a_event->holder)->As<RE::Actor>();
        switch (hash(eventTag.data(), eventTag.size())) {
        case "BeginCastVoice"_h:

            logger::info("anim_event BeginCastVoice");

            GetEquippedShout(actor);

            break;

        case "Voice_SpellFire_Event"_h:

            logger::info("anim_event Voice_SpellFire_Event");

            GetEquippedShout(actor, true);

            break;
		
		}
	}

	EventResult on_animation_event::ProcessEvent_NPC(RE::BSTEventSink<RE::BSAnimationGraphEvent>* a_sink, RE::BSAnimationGraphEvent* a_event, RE::BSTEventSource<RE::BSAnimationGraphEvent>* a_eventSource)
	{
		ProcessEvent(a_sink, a_event, a_eventSource);
		return _ProcessEvent_NPC(a_sink, a_event, a_eventSource);
	}

	EventResult on_animation_event::ProcessEvent_PC(RE::BSTEventSink<RE::BSAnimationGraphEvent>* a_sink, RE::BSAnimationGraphEvent* a_event, RE::BSTEventSource<RE::BSAnimationGraphEvent>* a_eventSource)
	{
		ProcessEvent(a_sink, a_event, a_eventSource);
		return _ProcessEvent_PC(a_sink, a_event, a_eventSource);
	}

}

// const auto caster = a_defender->GetMagicCaster(RE::MagicSystem::CastingSource::kInstant);
// float a_reprisal = (EldenParry::GetSingleton()->AttackerBeatsParry(a_aggressor, a_defender));
// auto bHasEldenParryPerk2 = a_defender->HasPerk(RE::BGSPerk::LookupByEditorID("ORD_Bck20_TimedBlock_Perk_50_OrdASISExclude")->As<RE::BGSPerk>());
// auto bHasEldenParryPerk1 = a_defender->HasPerk(RE::BGSPerk::LookupByEditorID("ORD_Bck20_TimedBlock_Perk_20_OrdASISExclude")->As<RE::BGSPerk>());
// if (bHasEldenParryPerk2 || bHasEldenParryPerk1)
// {
//     RE::MagicItem *eldenArmorSpell = nullptr;
//     if (bHasEldenParryPerk2 == true)
//     {
//         eldenArmorSpell = RE::TESForm::LookupByEditorID<RE::MagicItem>("ORD_Bck_TimedBlock_Spell_Proc_2");
//     }
//     else if (bHasEldenParryPerk1)
//     {
//         eldenArmorSpell = RE::TESForm::LookupByEditorID<RE::MagicItem>("ORD_Bck_TimedBlock_Spell_Proc");
//     }
//     caster->CastSpellImmediate(eldenArmorSpell, true, a_defender, 1, false, 45, a_defender);
// }

// const auto ActorTypeDragon = RE::BGSKeyword::LookupByEditorID("ActorTypeDragon")->As<RE::BGSKeyword>();
// auto UDDragonAISpell = RE::TESForm::LookupByEditorID<RE::SpellItem>("aaaUDDragonAISpell");

// bool IsActorTypeFelldir = Dragon->HasKeyword(ActorTypeDragon);
// bool HasUDDragonAISpell = Dragon->HasSpell(UDDragonAISpell);

// uti/l::playSound(actor, RE::TESForm::LookupByEditorID<RE::TESForm>

//Actors\\Character