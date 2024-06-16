#pragma once

 

// Package: RankingMenu_Player

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass RankingMenu_Player.RankingMenu_Player_C
// 0x0250 (0x04C8 - 0x0278)
class URankingMenu_Player_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             AchievementName;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_1;                                              // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_2;                                              // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_3;                                              // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_4;                                              // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_5;                                              // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_6;                                              // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_7;                                              // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_8;                                              // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 bg05;                                              // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 bg05_1;                                            // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 bg05_2;                                            // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 bg05_3;                                            // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 bg05_4;                                            // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 bg05_5;                                            // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 bg05_6;                                            // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 bg05_7;                                            // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 bg09_4;                                            // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 bg09_5;                                            // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 bg09_6;                                            // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 bg09_7;                                            // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 bg10_4;                                            // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 bg10_5;                                            // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 bg10_6;                                            // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 bg10_7;                                            // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 bg14_4;                                            // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 bg14_5;                                            // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 bg14_6;                                            // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 bg14_7;                                            // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCaptureImageFace_C*                    CaptureImageFace;                                  // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCaptureImageFace_C*                    CaptureImageFace_1;                                // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClassIcon_C*                           ClassIcon;                                         // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClassIcon_C*                           ClassIcon_1;                                       // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Glow_1stPlace;                                     // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Glow_1stPlace_1;                                   // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Glow_Underline;                                    // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Glow_Underline_1;                                  // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGuildTag_C*                            GuildTag;                                          // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_181;                                         // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LevelNum;                                          // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LevelNum_1;                                        // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            PlayerButton;                                      // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            PlayerButton_1;                                    // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PlayerId;                                          // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PlayerId_1;                                        // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PlayerName;                                        // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PlayerName_1;                                      // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             RankNum;                                           // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             RankNum_1;                                         // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             RecordTimeNum;                                     // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             RecordTimeNum_1;                                   // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             RecordTimeNum_3;                                   // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock;                                         // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_2;                                       // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TotalPowerNum;                                     // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TotalPowerNum_1;                                   // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 UserTag_Party;                                     // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 UserTag_Player;                                    // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 UserTag_Player_1;                                  // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 UserTag_Team;                                      // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_163;                                // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Bg;                                 // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Bg_1;                               // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Player;                             // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 CharacterId;                                       // 0x0498(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           ProfileDetaTaikiWaitBlocker;                       // 0x04A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerProfile_C*                       PlayerProfile;                                     // 0x04B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOpenProfile;                                     // 0x04B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9056[0x7];                                     // 0x04B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIBlocker_C*                           UIBlocker;                                         // 0x04C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_RankingMenu_Player(int32 EntryPoint);
	void OnIsGetPlayerProfileDetailMenuDataDelegate_Event(const bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, const int32 RetCode);
	void OnClose_Event();
	void BndEvt__SBButton_C_59_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void DownLoadFaceImage_Event(const class FString& URL);
	void SetRankingData(int32 CategoryRank, const struct FRankingData& RankingData, bool IsTimeAttack);
	void Set_My_Rank_Data(int32 CategoryRank, const struct FRankingData& RankingData, bool IsTimeAttack, bool IsOutOfRank, bool IsRankingAggregation);
	void SetEmptyMyRank();
	void GetShotID(class FString* Short_Id);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RankingMenu_Player_C">();
	}
	static class URankingMenu_Player_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URankingMenu_Player_C>();
	}
};
static_assert(alignof(URankingMenu_Player_C) == 0x000008, "Wrong alignment on URankingMenu_Player_C");
static_assert(sizeof(URankingMenu_Player_C) == 0x0004C8, "Wrong size on URankingMenu_Player_C");
static_assert(offsetof(URankingMenu_Player_C, UberGraphFrame) == 0x000278, "Member 'URankingMenu_Player_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, AnimOut) == 0x000280, "Member 'URankingMenu_Player_C::AnimOut' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, AnimIn) == 0x000288, "Member 'URankingMenu_Player_C::AnimIn' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, AchievementName) == 0x000290, "Member 'URankingMenu_Player_C::AchievementName' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, BG) == 0x000298, "Member 'URankingMenu_Player_C::BG' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, BG_1) == 0x0002A0, "Member 'URankingMenu_Player_C::BG_1' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, BG_2) == 0x0002A8, "Member 'URankingMenu_Player_C::BG_2' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, BG_3) == 0x0002B0, "Member 'URankingMenu_Player_C::BG_3' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, BG_4) == 0x0002B8, "Member 'URankingMenu_Player_C::BG_4' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, BG_5) == 0x0002C0, "Member 'URankingMenu_Player_C::BG_5' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, BG_6) == 0x0002C8, "Member 'URankingMenu_Player_C::BG_6' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, BG_7) == 0x0002D0, "Member 'URankingMenu_Player_C::BG_7' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, BG_8) == 0x0002D8, "Member 'URankingMenu_Player_C::BG_8' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, bg05) == 0x0002E0, "Member 'URankingMenu_Player_C::bg05' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, bg05_1) == 0x0002E8, "Member 'URankingMenu_Player_C::bg05_1' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, bg05_2) == 0x0002F0, "Member 'URankingMenu_Player_C::bg05_2' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, bg05_3) == 0x0002F8, "Member 'URankingMenu_Player_C::bg05_3' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, bg05_4) == 0x000300, "Member 'URankingMenu_Player_C::bg05_4' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, bg05_5) == 0x000308, "Member 'URankingMenu_Player_C::bg05_5' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, bg05_6) == 0x000310, "Member 'URankingMenu_Player_C::bg05_6' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, bg05_7) == 0x000318, "Member 'URankingMenu_Player_C::bg05_7' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, bg09_4) == 0x000320, "Member 'URankingMenu_Player_C::bg09_4' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, bg09_5) == 0x000328, "Member 'URankingMenu_Player_C::bg09_5' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, bg09_6) == 0x000330, "Member 'URankingMenu_Player_C::bg09_6' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, bg09_7) == 0x000338, "Member 'URankingMenu_Player_C::bg09_7' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, bg10_4) == 0x000340, "Member 'URankingMenu_Player_C::bg10_4' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, bg10_5) == 0x000348, "Member 'URankingMenu_Player_C::bg10_5' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, bg10_6) == 0x000350, "Member 'URankingMenu_Player_C::bg10_6' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, bg10_7) == 0x000358, "Member 'URankingMenu_Player_C::bg10_7' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, bg14_4) == 0x000360, "Member 'URankingMenu_Player_C::bg14_4' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, bg14_5) == 0x000368, "Member 'URankingMenu_Player_C::bg14_5' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, bg14_6) == 0x000370, "Member 'URankingMenu_Player_C::bg14_6' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, bg14_7) == 0x000378, "Member 'URankingMenu_Player_C::bg14_7' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, CaptureImageFace) == 0x000380, "Member 'URankingMenu_Player_C::CaptureImageFace' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, CaptureImageFace_1) == 0x000388, "Member 'URankingMenu_Player_C::CaptureImageFace_1' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, ClassIcon) == 0x000390, "Member 'URankingMenu_Player_C::ClassIcon' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, ClassIcon_1) == 0x000398, "Member 'URankingMenu_Player_C::ClassIcon_1' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, Glow_1stPlace) == 0x0003A0, "Member 'URankingMenu_Player_C::Glow_1stPlace' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, Glow_1stPlace_1) == 0x0003A8, "Member 'URankingMenu_Player_C::Glow_1stPlace_1' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, Glow_Underline) == 0x0003B0, "Member 'URankingMenu_Player_C::Glow_Underline' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, Glow_Underline_1) == 0x0003B8, "Member 'URankingMenu_Player_C::Glow_Underline_1' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, GuildTag) == 0x0003C0, "Member 'URankingMenu_Player_C::GuildTag' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, Image_181) == 0x0003C8, "Member 'URankingMenu_Player_C::Image_181' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, LevelNum) == 0x0003D0, "Member 'URankingMenu_Player_C::LevelNum' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, LevelNum_1) == 0x0003D8, "Member 'URankingMenu_Player_C::LevelNum_1' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, PlayerButton) == 0x0003E0, "Member 'URankingMenu_Player_C::PlayerButton' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, PlayerButton_1) == 0x0003E8, "Member 'URankingMenu_Player_C::PlayerButton_1' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, PlayerId) == 0x0003F0, "Member 'URankingMenu_Player_C::PlayerId' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, PlayerId_1) == 0x0003F8, "Member 'URankingMenu_Player_C::PlayerId_1' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, PlayerName) == 0x000400, "Member 'URankingMenu_Player_C::PlayerName' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, PlayerName_1) == 0x000408, "Member 'URankingMenu_Player_C::PlayerName_1' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, RankNum) == 0x000410, "Member 'URankingMenu_Player_C::RankNum' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, RankNum_1) == 0x000418, "Member 'URankingMenu_Player_C::RankNum_1' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, RecordTimeNum) == 0x000420, "Member 'URankingMenu_Player_C::RecordTimeNum' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, RecordTimeNum_1) == 0x000428, "Member 'URankingMenu_Player_C::RecordTimeNum_1' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, RecordTimeNum_3) == 0x000430, "Member 'URankingMenu_Player_C::RecordTimeNum_3' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, TextBlock) == 0x000438, "Member 'URankingMenu_Player_C::TextBlock' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, TextBlock_2) == 0x000440, "Member 'URankingMenu_Player_C::TextBlock_2' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, TotalPowerNum) == 0x000448, "Member 'URankingMenu_Player_C::TotalPowerNum' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, TotalPowerNum_1) == 0x000450, "Member 'URankingMenu_Player_C::TotalPowerNum_1' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, UserTag_Party) == 0x000458, "Member 'URankingMenu_Player_C::UserTag_Party' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, UserTag_Player) == 0x000460, "Member 'URankingMenu_Player_C::UserTag_Player' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, UserTag_Player_1) == 0x000468, "Member 'URankingMenu_Player_C::UserTag_Player_1' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, UserTag_Team) == 0x000470, "Member 'URankingMenu_Player_C::UserTag_Team' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, WidgetSwitcher_163) == 0x000478, "Member 'URankingMenu_Player_C::WidgetSwitcher_163' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, WidgetSwitcher_Bg) == 0x000480, "Member 'URankingMenu_Player_C::WidgetSwitcher_Bg' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, WidgetSwitcher_Bg_1) == 0x000488, "Member 'URankingMenu_Player_C::WidgetSwitcher_Bg_1' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, WidgetSwitcher_Player) == 0x000490, "Member 'URankingMenu_Player_C::WidgetSwitcher_Player' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, CharacterId) == 0x000498, "Member 'URankingMenu_Player_C::CharacterId' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, ProfileDetaTaikiWaitBlocker) == 0x0004A8, "Member 'URankingMenu_Player_C::ProfileDetaTaikiWaitBlocker' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, PlayerProfile) == 0x0004B0, "Member 'URankingMenu_Player_C::PlayerProfile' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, IsOpenProfile) == 0x0004B8, "Member 'URankingMenu_Player_C::IsOpenProfile' has a wrong offset!");
static_assert(offsetof(URankingMenu_Player_C, UIBlocker) == 0x0004C0, "Member 'URankingMenu_Player_C::UIBlocker' has a wrong offset!");

}

