#pragma once

 

// Package: DhcBattleHUD

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "EN_DHCStatus_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DhcBattleHUD.DhcBattleHUD_C
// 0x01C0 (0x0438 - 0x0278)
class UDhcBattleHUD_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 ArrowImage;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClassIconL_C*                          ClassIconL;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDhcBattleMemberItem_C*                 DhcBattleMemberItem;                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDhcBattleMemberItem_C*                 DhcBattleMemberItem_758;                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDhcBattleMemberItem_C*                 DhcBattleMemberItem_871;                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDhcBattleMemberItem_C*                 DhcBattleMemberItem_944;                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDhcBattleMemberItem_C*                 DhcBattleMemberItem_1031;                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_Time_1;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_Time_3;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_Time_MilliSec;                               // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_Time_Sec;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_TimeMin;                                     // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line1_1;                                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line1_2;                                           // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line2_1;                                           // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line2_2;                                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line2_3;                                           // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line2_4;                                           // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NewRecordIcon;                                     // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock;                                // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_2;                              // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_3;                              // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_4;                              // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_5;                              // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_6;                              // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_7;                              // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_251;                            // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_1178;                           // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TimerIcon;                                         // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_54;                                    // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_154;                                // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESBClassType                                  ClassType;                                         // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6256[0x7];                                     // 0x0379(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_DHCMeasurer_C*                      BPDHCMeasurer;                                     // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            In_Color_and_Opacity;                              // 0x0388(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	EN_DHCStatus                                  DHCState;                                          // 0x03B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6257[0x3];                                     // 0x03B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         HiScore;                                           // 0x03B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<int32, class UDhcBattleMemberItem_C*>    MemberItemArray;                                   // 0x03B8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class FString                                 PlayerName;                                        // 0x0408(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         PlayerIndex;                                       // 0x0418(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6258[0x4];                                     // 0x041C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     SBPlayerCharacter;                                 // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBDhcBattleComponent*                  DhcBattleComponent;                                // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInRoom;                                          // 0x0430(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsFinish;                                          // 0x0431(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsInit;                                            // 0x0432(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_DhcBattleHUD(int32 EntryPoint);
	void Destruct();
	void CustomEvent_0(const int32 InRetCode, const bool InResult);
	void OnLoadDhcBattleHighScore(const int32 InRetCode, const struct FSBDhcBattleInfo& InAttackCheckerInfo);
	void FinishSetting();
	void InitColor();
	void NewRecordSetting();
	void AnimIn();
	void LocalPlayerQuit();
	void StateChanged(EN_DHCStatus Param_DHCState, bool LocalPlayerJoined);
	void DhcBind();
	void DhcUnbind();
	void Init(class AActor* DHCMeasurer);
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void SetTime(float Sec);
	void CreateMemberList();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DhcBattleHUD_C">();
	}
	static class UDhcBattleHUD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDhcBattleHUD_C>();
	}
};
static_assert(alignof(UDhcBattleHUD_C) == 0x000008, "Wrong alignment on UDhcBattleHUD_C");
static_assert(sizeof(UDhcBattleHUD_C) == 0x000438, "Wrong size on UDhcBattleHUD_C");
static_assert(offsetof(UDhcBattleHUD_C, UberGraphFrame) == 0x000278, "Member 'UDhcBattleHUD_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, ArrowImage) == 0x000280, "Member 'UDhcBattleHUD_C::ArrowImage' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, ClassIconL) == 0x000288, "Member 'UDhcBattleHUD_C::ClassIconL' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, DhcBattleMemberItem) == 0x000290, "Member 'UDhcBattleHUD_C::DhcBattleMemberItem' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, DhcBattleMemberItem_758) == 0x000298, "Member 'UDhcBattleHUD_C::DhcBattleMemberItem_758' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, DhcBattleMemberItem_871) == 0x0002A0, "Member 'UDhcBattleHUD_C::DhcBattleMemberItem_871' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, DhcBattleMemberItem_944) == 0x0002A8, "Member 'UDhcBattleHUD_C::DhcBattleMemberItem_944' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, DhcBattleMemberItem_1031) == 0x0002B0, "Member 'UDhcBattleHUD_C::DhcBattleMemberItem_1031' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, Label_Time_1) == 0x0002B8, "Member 'UDhcBattleHUD_C::Label_Time_1' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, Label_Time_3) == 0x0002C0, "Member 'UDhcBattleHUD_C::Label_Time_3' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, Label_Time_MilliSec) == 0x0002C8, "Member 'UDhcBattleHUD_C::Label_Time_MilliSec' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, Label_Time_Sec) == 0x0002D0, "Member 'UDhcBattleHUD_C::Label_Time_Sec' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, Label_TimeMin) == 0x0002D8, "Member 'UDhcBattleHUD_C::Label_TimeMin' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, Line1_1) == 0x0002E0, "Member 'UDhcBattleHUD_C::Line1_1' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, Line1_2) == 0x0002E8, "Member 'UDhcBattleHUD_C::Line1_2' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, Line2_1) == 0x0002F0, "Member 'UDhcBattleHUD_C::Line2_1' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, Line2_2) == 0x0002F8, "Member 'UDhcBattleHUD_C::Line2_2' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, Line2_3) == 0x000300, "Member 'UDhcBattleHUD_C::Line2_3' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, Line2_4) == 0x000308, "Member 'UDhcBattleHUD_C::Line2_4' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, NewRecordIcon) == 0x000310, "Member 'UDhcBattleHUD_C::NewRecordIcon' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, SBRuntimeTextBlock) == 0x000318, "Member 'UDhcBattleHUD_C::SBRuntimeTextBlock' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, SBRuntimeTextBlock_2) == 0x000320, "Member 'UDhcBattleHUD_C::SBRuntimeTextBlock_2' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, SBRuntimeTextBlock_3) == 0x000328, "Member 'UDhcBattleHUD_C::SBRuntimeTextBlock_3' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, SBRuntimeTextBlock_4) == 0x000330, "Member 'UDhcBattleHUD_C::SBRuntimeTextBlock_4' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, SBRuntimeTextBlock_5) == 0x000338, "Member 'UDhcBattleHUD_C::SBRuntimeTextBlock_5' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, SBRuntimeTextBlock_6) == 0x000340, "Member 'UDhcBattleHUD_C::SBRuntimeTextBlock_6' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, SBRuntimeTextBlock_7) == 0x000348, "Member 'UDhcBattleHUD_C::SBRuntimeTextBlock_7' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, SBRuntimeTextBlock_251) == 0x000350, "Member 'UDhcBattleHUD_C::SBRuntimeTextBlock_251' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, SBRuntimeTextBlock_1178) == 0x000358, "Member 'UDhcBattleHUD_C::SBRuntimeTextBlock_1178' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, TimerIcon) == 0x000360, "Member 'UDhcBattleHUD_C::TimerIcon' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, VerticalBox_54) == 0x000368, "Member 'UDhcBattleHUD_C::VerticalBox_54' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, WidgetSwitcher_154) == 0x000370, "Member 'UDhcBattleHUD_C::WidgetSwitcher_154' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, ClassType) == 0x000378, "Member 'UDhcBattleHUD_C::ClassType' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, BPDHCMeasurer) == 0x000380, "Member 'UDhcBattleHUD_C::BPDHCMeasurer' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, In_Color_and_Opacity) == 0x000388, "Member 'UDhcBattleHUD_C::In_Color_and_Opacity' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, DHCState) == 0x0003B0, "Member 'UDhcBattleHUD_C::DHCState' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, HiScore) == 0x0003B4, "Member 'UDhcBattleHUD_C::HiScore' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, MemberItemArray) == 0x0003B8, "Member 'UDhcBattleHUD_C::MemberItemArray' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, PlayerName) == 0x000408, "Member 'UDhcBattleHUD_C::PlayerName' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, PlayerIndex) == 0x000418, "Member 'UDhcBattleHUD_C::PlayerIndex' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, SBPlayerCharacter) == 0x000420, "Member 'UDhcBattleHUD_C::SBPlayerCharacter' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, DhcBattleComponent) == 0x000428, "Member 'UDhcBattleHUD_C::DhcBattleComponent' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, IsInRoom) == 0x000430, "Member 'UDhcBattleHUD_C::IsInRoom' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, IsFinish) == 0x000431, "Member 'UDhcBattleHUD_C::IsFinish' has a wrong offset!");
static_assert(offsetof(UDhcBattleHUD_C, IsInit) == 0x000432, "Member 'UDhcBattleHUD_C::IsInit' has a wrong offset!");

}

