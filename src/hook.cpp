#include "hook.h"

namespace hooks
{
    RE::TESForm;
    void on_animation_event::GetEquippedShout(RE::Actor *actor, bool SpellFire){
        auto limboshout = actor->GetActorRuntimeData().selectedPower;

        if (limboshout && limboshout->Is(RE::FormType::Shout))
        {
            auto data = RE::TESDataHandler::GetSingleton();
            // bool IsActorTypeFelldir = actor->HasKeywordString("HoY_Felldir");
            // bool IsActorTypePhantomFelldir = actor->HasKeywordString("HoY_PhantomFelldir");
            // bool IsActorTypeGreyBeard = actor->HasKeywordString("HoY_GreyBeard");
            // bool IsActorTypePhantomGreyBeard = actor->HasKeywordString("HoY_PhantomGreyBeard");
            // bool IsActorTypeMiraak = actor->HasKeywordString("HoY_Miraak");
            // bool IsActorTypeGormlaith = actor->HasKeywordString("HoY_Gormlaith");
            // bool IsActorTypeHakon = actor->HasKeywordString("HoY_Hakon");
            // bool IsActorTypeUlfric = actor->HasKeywordString("HoY_Ulfric");
            // bool IsActorTypeTsun = actor->HasKeywordString("HoY_Tsun");
            // bool IsActorTypeEbonyWarrior = actor->HasKeywordString("HoY_EbonyWarrior");

            std::string_view Lsht = (clib_util::editorID::get_editorID(limboshout)).data();
            //logger::info("Actor {} Shout {}"sv, actor->GetName(), Lsht);
            
            switch (hash(Lsht.data(), Lsht.size()))
            {
            case "HoY_BendWillShout_Miraak"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x857, "Heroes of Yore.esp")));
                } else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x855, "Heroes of Yore.esp")));
                }
                break;

            case "HoY_DragonAspectShout_Miraak"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x859, "Heroes of Yore.esp")));
                } else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x858, "Heroes of Yore.esp")));
                }
                break;

            case "HoY_SonicShieldShout_Miraak"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x854, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x853, "Heroes of Yore.esp")));
                }
                break;

            case "HoY_PullofNirnShout_Miraak"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x856, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x855, "Heroes of Yore.esp")));
                }
                break;

            case "HoY_MarkedForDeathShout_Miraak"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x85D, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x85C, "Heroes of Yore.esp")));
                }
                break;

            case "HoY_DisarmShout_Gormlaith"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x887, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x886, "Heroes of Yore.esp")));
                }
                break;
            case "HoY_DisarmShout_Greybeard"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x875, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x874, "Heroes of Yore.esp")));
                }
                break;
            case "HoY_DisarmShout_Ulfric"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8B5, "Heroes of Yore.esp"))); 
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8B4, "Heroes of Yore.esp")));
                }
                break;
            case "HoY_DisarmShout_EbonyWarrior"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8B9, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8B8, "Heroes of Yore.esp")));
                }
                break;

            case "HoY_FireBreathShout_Gormlaith"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x889, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x888, "Heroes of Yore.esp")));
                }
                break;
            case "HoY_FireBreathShout_Felldir"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x895, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x894, "Heroes of Yore.esp")));
                }
                break;
            case "HoY_FireBreathShout_Miraak"_h:
                if (SpellFire){
                    util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x850, "Heroes of Yore.esp")));  
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x84F, "Heroes of Yore.esp")));
                }
                break;
            case "HoY_FireBreathShout_GreyBeard"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x877, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x876, "Heroes of Yore.esp")));
                }
                break;
            case "HoY_FireBreathShout_PhantomFelldir"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x895, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x894, "Heroes of Yore.esp")));
                }
                break;

            case "HoY_MoonBlastShout_Miraak"_h:
                if (SpellFire){
                    util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x86D, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x86C, "Heroes of Yore.esp")));
                }
                break;

            case "HoY_DevourSoulShout_Miraak"_h:
                if (SpellFire){
                    util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x863, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x862, "Heroes of Yore.esp")));
                }
                break;

            case "MQ105PhantomFormShout"_h:
            case "HoY_PhantomFormShout_GreyBeard"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x87B, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x87A, "Heroes of Yore.esp")));
                }
                break;
            case "HoY_PhantomFormShout_Felldir"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x89B, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x89A, "Heroes of Yore.esp")));
                }
                break;

            case "HoY_CycloneShout_Miraak"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x865, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x864, "Heroes of Yore.esp")));
                }
                break;
            case "HoY_CycloneShout_Felldir"_h:
            case "HoY_CycloneShout_PhantomFelldir"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x899, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x898, "Heroes of Yore.esp")));
                }
                break;

            case "HoY_ApocryphalCataclysmShout_Miraak"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x867, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x866, "Heroes of Yore.esp")));
                }
                break;

            case "HoY_IceFormShout_Gormlaith"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x885, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x884, "Heroes of Yore.esp")));
                }
                break;
            case "HoY_IceFormShout_GreyBeard"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x873, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x872, "Heroes of Yore.esp")));
                }
                break;

            case "HoY_ClearSkiesShout_Felldir"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8A1, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8A0, "Heroes of Yore.esp")));
                }
                break;
            case "HoY_ClearSkiesShout_Gormlaith"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x891, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x890, "Heroes of Yore.esp")));
                }
                break;
            case "HoY_ClearSkiesShout_Hakon"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8B1, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8B0, "Heroes of Yore.esp")));
                }
                break;
            case "HoY_ClearSkiesShout_GreyBeard"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x87D, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x87C, "Heroes of Yore.esp")));
                }
                break;

            case "HoY_DismayShout_Hakon"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8A5, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8A4, "Heroes of Yore.esp")));
                }
                break;
            case "HoY_Dismay_GreyBeard"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x871, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x870, "Heroes of Yore.esp")));
                }
                break;
            case "HoY_DismayShout_Gormlaith"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x6842, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x6841, "Heroes of Yore.esp")));
                }
                break;

            case "HoY_ShockBreathShout_Felldir"_h:
            case "HoY_ShockBreathShout_PhantomFelldir"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x897, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x896, "Heroes of Yore.esp")));
                }
                break;
            case "HoY_ShockBreathShout_Hakon"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8A7, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8A6, "Heroes of Yore.esp")));
                }
                break;
            case "HoY_ShockBreathShout_Miraak"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x85F, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x85E, "Heroes of Yore.esp")));
                }
                break;

            case "HoY_ElementalFuryShout_Hakon"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8AD, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8AC, "Heroes of Yore.esp")));
                }
                break;
            case "HoY_ElementalFuryShout_Miraak"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x86B, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x86A, "Heroes of Yore.esp")));
                }
                break;
            case "HoY_ElementalFuryShout_GreyBeard"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x87F, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x87E, "Heroes of Yore.esp")));
                }
                break;

            case "HoY_WhirlwindSprintShout_Miraak"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x85B, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x85A, "Heroes of Yore.esp")));
                }
                break;
            case "HoY_WhirlwindSprintShout_GreyBeard"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x881, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x880, "Heroes of Yore.esp")));
                }
                break;
            case "HoY_WhirlwindSprintShout_Hakon"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x684A, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x6849, "Heroes of Yore.esp")));
                }
                break;

            case "HoY_DragonrendShout_Gormlaith"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x88F, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x88E, "Heroes of Yore.esp")));
                }
                break;
            case "HoY_DragonrendShout_Felldir"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x89F, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x89E, "Heroes of Yore.esp")));
                }
                break;
            case "HoY_DragonrendShout_Hakon"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8AF, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8AE, "Heroes of Yore.esp")));
                }
                break;

            case "HoY_SkyShiftShout_Miraak"_h:
                if (SpellFire){
                    util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x869, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x868, "Heroes of Yore.esp")));
                }
                break;

            case "HoY_FrostBreathShout_Gormlaith"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x88B, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x88A, "Heroes of Yore.esp")));
                }
                break;
            case "HoY_FrostBreathShout_Hakon"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8A9, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8A8, "Heroes of Yore.esp")));
                }
                break;
            case "HoY_FrostBreathShout_Miraak"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x852, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x851, "Heroes of Yore.esp")));
                }
                break;
            case "HoY_FrostBreathShout_GreyBeard"_h:
            case "HoY_FrostBreathShout_PhantomGreyBeard"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x879, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x878, "Heroes of Yore.esp")));
                }
                break;

            case "HoY_UnrelentingForceShout_Gormlaith"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x883, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x882, "Heroes of Yore.esp")));
                }
                break;

            case "HoY_UnrelentingForceShout_Felldir"_h:
            case "HoY_UnrelentingForceShout_PhantomFelldir"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x893, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x892, "Heroes of Yore.esp")));
                }
                break;

            case "HoY_UnrelentingForceShout_Hakon"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8A3, "Heroes of Yore.esp"))); 
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8A2, "Heroes of Yore.esp")));
                }
                break;

            case "HoY_UnrelentingForceShout_Miraak"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x84D, "Heroes of Yore.esp")));
                    
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x84C, "Heroes of Yore.esp")));
                }
                break;

            case "HoY_UnrelentingForceShout_EbonyWarrior"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8B7, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8B6, "Heroes of Yore.esp")));
                }
                break;

            case "HoY_UnrelentingForceShout_GreyBeard"_h:
            case "HoY_UnrelentingForceShout_PhantomGreyBeard"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x86F, "Heroes of Yore.esp")));    
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x86E, "Heroes of Yore.esp")));
                }
                break;

            case "HoY_UnrelentingForceShout_Tsun"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8BB, "Heroes of Yore.esp")));  
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8BA, "Heroes of Yore.esp")));
                }
                break;

            case "HoY_UnrelentingForceShout_Ulfric"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8B3, "Heroes of Yore.esp")));  
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8B2, "Heroes of Yore.esp")));
                }
                break;

            case "HoY_ThuumSeekShout_Miraak"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x687B, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x687A, "Heroes of Yore.esp")));
                }
                break;

            case "HoY_ThuumSeekShout_Felldir"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x6844, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x6843, "Heroes of Yore.esp")));
                }
                break;

            case "HoY_BecomeEtherealShout_Gormlaith"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x88D, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x88C, "Heroes of Yore.esp")));
                }
                break;

            case "HoY_BecomeEtherealShout_Hakon"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8AB, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x8AA, "Heroes of Yore.esp")));
                }
                break;

            case "HoY_BecomeEtherealShout_Miraak"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x861, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x860, "Heroes of Yore.esp")));
                }
                break;

            case "HoY_DrainVitalityShout_Felldir"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x89D, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x89C, "Heroes of Yore.esp")));
                }
                break;

            case "HoY_MirrorMissilesShout_Felldir"_h:
                if (SpellFire){
                    util::playSound(actor, (data->LookupForm<RE::BGSSoundDescriptorForm>(0x68A4, "Heroes of Yore.esp")));
                }else{
                    util::playSound(actor,(data->LookupForm<RE::BGSSoundDescriptorForm>(0x68A3, "Heroes of Yore.esp")));
                }
                break;

            default:
               
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

            //logger::info("anim_event BeginCastVoice");

            GetEquippedShout(actor);

            break;

        case "Voice_SpellFire_Event"_h:

            //logger::info("anim_event Voice_SpellFire_Event");

            GetEquippedShout(actor, true);

            break;
		
		}
	}

	EventResult on_animation_event::ProcessEvent_NPC(RE::BSTEventSink<RE::BSAnimationGraphEvent>* a_sink, RE::BSAnimationGraphEvent* a_event, RE::BSTEventSource<RE::BSAnimationGraphEvent>* a_eventSource)
	{
		ProcessEvent(a_sink, a_event, a_eventSource);
		return _ProcessEvent_NPC(a_sink, a_event, a_eventSource);
	}

	// EventResult on_animation_event::ProcessEvent_PC(RE::BSTEventSink<RE::BSAnimationGraphEvent>* a_sink, RE::BSAnimationGraphEvent* a_event, RE::BSTEventSource<RE::BSAnimationGraphEvent>* a_eventSource)
	// {
	// 	ProcessEvent(a_sink, a_event, a_eventSource);
	// 	return _ProcessEvent_PC(a_sink, a_event, a_eventSource);
	// }

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

// bool IsActorTypeFelldir || IsActorTypePhantomFelldir = Dragon->HasKeyword(ActorTypeDragon);
// bool HasUDDragonAISpell = Dragon->HasSpell(UDDragonAISpell);

// uti/l::playSound(actor, RE::TESForm::LookupByEditorID<RE::TESForm>

//Actors\\Character