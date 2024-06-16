#pragma once

 

// Package: PlayerPartyLevelInfo

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PlayerPartyLevelInfo.PlayerPartyLevelInfo_C
// 0x0358 (0x05D0 - 0x0278)
class UPlayerPartyLevelInfo_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           AdventureRank0;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCaptureImageMatching_C*                CaptureImageMatching;                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClassIconL_C*                          ClassIconLMe0;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClassIconL_C*                          ClassIconLMe1;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClassIconL_C*                          ClassIconLMember0;                                 // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClassIconL_C*                          ClassIconLMember1;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClassIconL_C*                          ClassIconLMember2;                                 // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClassIconL_C*                          ClassIconLMember3;                                 // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClassIconL_C*                          ClassIconLMember4;                                 // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ClassLevelMember0;                                 // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ClassLevelMember1;                                 // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ClassLevelMember2;                                 // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ClassLevelMember3;                                 // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ClassLevelMember4;                                 // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageLevelSync0;                                   // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageLevelSync1;                                   // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageLevelSyncBattleScore0;                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageLevelSyncBattleScore_PT;                      // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Line1;                                             // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Party;                                             // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Party_bg;                                          // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Player;                                            // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Player_1;                                          // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Player_bg;                                         // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    RuntimeTextClassLevelMe0;                          // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    RuntimeTextClassLevelMe1;                          // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    RuntimeTextClassLevelMember0;                      // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    RuntimeTextClassLevelMember1;                      // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    RuntimeTextClassLevelMember2;                      // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    RuntimeTextClassLevelMember3;                      // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    RuntimeTextClassLevelMember4;                      // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextAdventureRank0;                                // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextAdventureRank1;                                // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBattleScore;                                   // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBattleScore_PT;                                // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StackB_S_C*                        WBP_StackB_S;                                      // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StackB_S_C*                        WBP_StackB_S_PT;                                   // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_PlayerOrParty;                      // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           LevelSyncTextColor;                                // 0x03B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FBattleMemberInfoSend>          Battle_Member_Info_Send_List;                      // 0x03C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FBattleMemberLevelSyncInfo>     Battle_Member_Level_Sync_Infos;                    // 0x03D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bRequestInProgress;                                // 0x03E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70D6[0x7];                                     // 0x03E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapInfo                             Selected_Map_Info;                                 // 0x03E8(0x01E0)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Need_Correction;                                   // 0x05C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_PlayerPartyLevelInfo(int32 EntryPoint);
	void CompleteEvent_OnGetEquipItemsForCharactersDelegate(const bool bWasSuccessful, const int32 RetCode, const TArray<struct FBattleMemberLevelSyncInfo>& BattleMemberLevelSyncInfos);
	void Destruct();
	void Event_OnChangedPartyMemberCount();
	void Construct();
	void DownloadAndSetFaceImage(class UCaptureImageMatching_C* CaptureImage);
	void Initialize();
	void InitializePlayer();
	void InitializeParty();
	void InitializeCommon();
	void InitializeClassInfo(int32 MemberIndex, class USBRuntimeTextBlock* RuntimeText, class UClassIconL_C* ClassIcon, class UCaptureImageMatching_C* CaptureImage);
	void HideAdventurerRank();
	void SetLevelSyncValue(int32 LevelSyncValue, ESBStackBEnableType StackBEnableType, const struct FSBMapInfo& MapInfo, bool bNeedCorrection);
	void SetLevelSyncValuePlayer(int32 LevelSyncValue);
	void SetLevelSyncValueParty(int32 LevelSyncValue);
	void SetLevelSyncValueMe(int32 LevelSyncValue, class UTextBlock* Text, class UImage* Image);
	void SetLevelSyncValueMember(int32 LevelSyncValue, int32 MemberIndex, class UTextBlock* Text);
	void SetLevelText(class UTextBlock* Text, int32 Level);
	void UpdateLevelBySync(int32 LevelSyncValue, int32 MemberIndex, class UTextBlock* Text, bool* OutLevelSyncIsValid);
	void GetLevelSyncInfo(int32 LevelSyncValue, int32 MemberIndex, bool* OutLevelSyncIsValid, int32* OutClassLevel);
	void SetTextColorBySync(bool SyncIsValid, class UTextBlock* Text);
	void SetBattleScore(int32 LevelSyncTarget, ESBStackBEnableType StackBEnableType, bool IsPlayerMode);
	void Set_Battle_Score_Core(int32 LevelSyncTarget, ESBStackBEnableType StackBEnableType, bool IsPlayerMode);
	void UpdateEquipItemsForCharacters();
	void RequestGetEquipItemsForCharacters();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerPartyLevelInfo_C">();
	}
	static class UPlayerPartyLevelInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerPartyLevelInfo_C>();
	}
};
static_assert(alignof(UPlayerPartyLevelInfo_C) == 0x000008, "Wrong alignment on UPlayerPartyLevelInfo_C");
static_assert(sizeof(UPlayerPartyLevelInfo_C) == 0x0005D0, "Wrong size on UPlayerPartyLevelInfo_C");
static_assert(offsetof(UPlayerPartyLevelInfo_C, UberGraphFrame) == 0x000278, "Member 'UPlayerPartyLevelInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, AdventureRank0) == 0x000280, "Member 'UPlayerPartyLevelInfo_C::AdventureRank0' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, CaptureImageMatching) == 0x000288, "Member 'UPlayerPartyLevelInfo_C::CaptureImageMatching' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, ClassIconLMe0) == 0x000290, "Member 'UPlayerPartyLevelInfo_C::ClassIconLMe0' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, ClassIconLMe1) == 0x000298, "Member 'UPlayerPartyLevelInfo_C::ClassIconLMe1' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, ClassIconLMember0) == 0x0002A0, "Member 'UPlayerPartyLevelInfo_C::ClassIconLMember0' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, ClassIconLMember1) == 0x0002A8, "Member 'UPlayerPartyLevelInfo_C::ClassIconLMember1' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, ClassIconLMember2) == 0x0002B0, "Member 'UPlayerPartyLevelInfo_C::ClassIconLMember2' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, ClassIconLMember3) == 0x0002B8, "Member 'UPlayerPartyLevelInfo_C::ClassIconLMember3' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, ClassIconLMember4) == 0x0002C0, "Member 'UPlayerPartyLevelInfo_C::ClassIconLMember4' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, ClassLevelMember0) == 0x0002C8, "Member 'UPlayerPartyLevelInfo_C::ClassLevelMember0' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, ClassLevelMember1) == 0x0002D0, "Member 'UPlayerPartyLevelInfo_C::ClassLevelMember1' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, ClassLevelMember2) == 0x0002D8, "Member 'UPlayerPartyLevelInfo_C::ClassLevelMember2' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, ClassLevelMember3) == 0x0002E0, "Member 'UPlayerPartyLevelInfo_C::ClassLevelMember3' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, ClassLevelMember4) == 0x0002E8, "Member 'UPlayerPartyLevelInfo_C::ClassLevelMember4' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, ImageLevelSync0) == 0x0002F0, "Member 'UPlayerPartyLevelInfo_C::ImageLevelSync0' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, ImageLevelSync1) == 0x0002F8, "Member 'UPlayerPartyLevelInfo_C::ImageLevelSync1' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, ImageLevelSyncBattleScore0) == 0x000300, "Member 'UPlayerPartyLevelInfo_C::ImageLevelSyncBattleScore0' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, ImageLevelSyncBattleScore_PT) == 0x000308, "Member 'UPlayerPartyLevelInfo_C::ImageLevelSyncBattleScore_PT' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, Line1) == 0x000310, "Member 'UPlayerPartyLevelInfo_C::Line1' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, Party) == 0x000318, "Member 'UPlayerPartyLevelInfo_C::Party' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, Party_bg) == 0x000320, "Member 'UPlayerPartyLevelInfo_C::Party_bg' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, Player) == 0x000328, "Member 'UPlayerPartyLevelInfo_C::Player' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, Player_1) == 0x000330, "Member 'UPlayerPartyLevelInfo_C::Player_1' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, Player_bg) == 0x000338, "Member 'UPlayerPartyLevelInfo_C::Player_bg' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, RuntimeTextClassLevelMe0) == 0x000340, "Member 'UPlayerPartyLevelInfo_C::RuntimeTextClassLevelMe0' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, RuntimeTextClassLevelMe1) == 0x000348, "Member 'UPlayerPartyLevelInfo_C::RuntimeTextClassLevelMe1' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, RuntimeTextClassLevelMember0) == 0x000350, "Member 'UPlayerPartyLevelInfo_C::RuntimeTextClassLevelMember0' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, RuntimeTextClassLevelMember1) == 0x000358, "Member 'UPlayerPartyLevelInfo_C::RuntimeTextClassLevelMember1' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, RuntimeTextClassLevelMember2) == 0x000360, "Member 'UPlayerPartyLevelInfo_C::RuntimeTextClassLevelMember2' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, RuntimeTextClassLevelMember3) == 0x000368, "Member 'UPlayerPartyLevelInfo_C::RuntimeTextClassLevelMember3' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, RuntimeTextClassLevelMember4) == 0x000370, "Member 'UPlayerPartyLevelInfo_C::RuntimeTextClassLevelMember4' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, TextAdventureRank0) == 0x000378, "Member 'UPlayerPartyLevelInfo_C::TextAdventureRank0' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, TextAdventureRank1) == 0x000380, "Member 'UPlayerPartyLevelInfo_C::TextAdventureRank1' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, TextBattleScore) == 0x000388, "Member 'UPlayerPartyLevelInfo_C::TextBattleScore' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, TextBattleScore_PT) == 0x000390, "Member 'UPlayerPartyLevelInfo_C::TextBattleScore_PT' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, WBP_StackB_S) == 0x000398, "Member 'UPlayerPartyLevelInfo_C::WBP_StackB_S' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, WBP_StackB_S_PT) == 0x0003A0, "Member 'UPlayerPartyLevelInfo_C::WBP_StackB_S_PT' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, WidgetSwitcher_PlayerOrParty) == 0x0003A8, "Member 'UPlayerPartyLevelInfo_C::WidgetSwitcher_PlayerOrParty' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, LevelSyncTextColor) == 0x0003B0, "Member 'UPlayerPartyLevelInfo_C::LevelSyncTextColor' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, Battle_Member_Info_Send_List) == 0x0003C0, "Member 'UPlayerPartyLevelInfo_C::Battle_Member_Info_Send_List' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, Battle_Member_Level_Sync_Infos) == 0x0003D0, "Member 'UPlayerPartyLevelInfo_C::Battle_Member_Level_Sync_Infos' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, bRequestInProgress) == 0x0003E0, "Member 'UPlayerPartyLevelInfo_C::bRequestInProgress' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, Selected_Map_Info) == 0x0003E8, "Member 'UPlayerPartyLevelInfo_C::Selected_Map_Info' has a wrong offset!");
static_assert(offsetof(UPlayerPartyLevelInfo_C, Need_Correction) == 0x0005C8, "Member 'UPlayerPartyLevelInfo_C::Need_Correction' has a wrong offset!");

}

