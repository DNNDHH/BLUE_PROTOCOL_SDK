#pragma once

 

// Package: WBP_SkillListBoard

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SkillListBoard.WBP_SkillListBoard_C
// 0x0130 (0x03A8 - 0x0278)
class UWBP_SkillListBoard_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       SkillListIn;                                       // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_1;                                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_2;                                              // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_3;                                              // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_4;                                              // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bg01;                                              // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG03;                                              // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG04;                                              // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line01;                                            // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line02;                                            // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line02_1;                                          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line02_2;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line02_3;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line02_4;                                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_Base;                                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_Class;                                   // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_Regular;                                 // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_Tactical;                                // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_ULT;                                     // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillBoardTabBox_C*                WBP_SkillBoardTabBox;                              // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillListItem_C*                   WBP_SkillListItem;                                 // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillListItem_C*                   WBP_SkillListItem_123;                             // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillListItem_C*                   WBP_SkillListItem_134;                             // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillListItem_C*                   WBP_SkillListItem_345;                             // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillListItem_C*                   WBP_SkillListItem_503;                             // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillListItem_C*                   WBP_SkillListItem_627;                             // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillListItem_C*                   WBP_SkillListItem_725;                             // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillListItem_C*                   WBP_SkillListItem_791;                             // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillListItem_C*                   WBP_SkillListItem_904;                             // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillListItem_C*                   WBP_SkillListItem_1106;                            // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillTreeHorizon_C*                WBP_SkillTreeHorizon;                              // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESBClassType                                  SelectClass;                                       // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_763F[0x7];                                     // 0x0389(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCommandMenu*                         OwnerCommandMenu;                                  // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSubMenuChanged;                                  // 0x0398(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnSubMenuChanged__DelegateSignature(int32 Param_Index);
	void ExecuteUbergraph_WBP_SkillListBoard(int32 EntryPoint);
	void Destruct();
	void OnCharaSkillMasteryOthersComplete(const int32 Result);
	void CustomEvent_1();
	void CustomEvent_0(ESBClassType Typr);
	void Construct();
	void OpenSkillTree(const struct FSBSkillDataMasterData& Skill);
	void BoardUpdate();
	void Get_Now_Select_Class(ESBClassType* Output);
	void Skill_List_Setting();
	void PassiveSkillListSetting();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SkillListBoard_C">();
	}
	static class UWBP_SkillListBoard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SkillListBoard_C>();
	}
};
static_assert(alignof(UWBP_SkillListBoard_C) == 0x000008, "Wrong alignment on UWBP_SkillListBoard_C");
static_assert(sizeof(UWBP_SkillListBoard_C) == 0x0003A8, "Wrong size on UWBP_SkillListBoard_C");
static_assert(offsetof(UWBP_SkillListBoard_C, UberGraphFrame) == 0x000278, "Member 'UWBP_SkillListBoard_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListBoard_C, SkillListIn) == 0x000280, "Member 'UWBP_SkillListBoard_C::SkillListIn' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListBoard_C, AnimIn) == 0x000288, "Member 'UWBP_SkillListBoard_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListBoard_C, BG) == 0x000290, "Member 'UWBP_SkillListBoard_C::BG' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListBoard_C, BG_1) == 0x000298, "Member 'UWBP_SkillListBoard_C::BG_1' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListBoard_C, BG_2) == 0x0002A0, "Member 'UWBP_SkillListBoard_C::BG_2' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListBoard_C, BG_3) == 0x0002A8, "Member 'UWBP_SkillListBoard_C::BG_3' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListBoard_C, BG_4) == 0x0002B0, "Member 'UWBP_SkillListBoard_C::BG_4' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListBoard_C, Bg01) == 0x0002B8, "Member 'UWBP_SkillListBoard_C::Bg01' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListBoard_C, BG03) == 0x0002C0, "Member 'UWBP_SkillListBoard_C::BG03' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListBoard_C, BG04) == 0x0002C8, "Member 'UWBP_SkillListBoard_C::BG04' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListBoard_C, Line01) == 0x0002D0, "Member 'UWBP_SkillListBoard_C::Line01' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListBoard_C, Line02) == 0x0002D8, "Member 'UWBP_SkillListBoard_C::Line02' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListBoard_C, Line02_1) == 0x0002E0, "Member 'UWBP_SkillListBoard_C::Line02_1' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListBoard_C, Line02_2) == 0x0002E8, "Member 'UWBP_SkillListBoard_C::Line02_2' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListBoard_C, Line02_3) == 0x0002F0, "Member 'UWBP_SkillListBoard_C::Line02_3' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListBoard_C, Line02_4) == 0x0002F8, "Member 'UWBP_SkillListBoard_C::Line02_4' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListBoard_C, ScrollBox_Base) == 0x000300, "Member 'UWBP_SkillListBoard_C::ScrollBox_Base' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListBoard_C, ScrollBox_Class) == 0x000308, "Member 'UWBP_SkillListBoard_C::ScrollBox_Class' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListBoard_C, ScrollBox_Regular) == 0x000310, "Member 'UWBP_SkillListBoard_C::ScrollBox_Regular' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListBoard_C, ScrollBox_Tactical) == 0x000318, "Member 'UWBP_SkillListBoard_C::ScrollBox_Tactical' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListBoard_C, ScrollBox_ULT) == 0x000320, "Member 'UWBP_SkillListBoard_C::ScrollBox_ULT' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListBoard_C, WBP_SkillBoardTabBox) == 0x000328, "Member 'UWBP_SkillListBoard_C::WBP_SkillBoardTabBox' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListBoard_C, WBP_SkillListItem) == 0x000330, "Member 'UWBP_SkillListBoard_C::WBP_SkillListItem' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListBoard_C, WBP_SkillListItem_123) == 0x000338, "Member 'UWBP_SkillListBoard_C::WBP_SkillListItem_123' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListBoard_C, WBP_SkillListItem_134) == 0x000340, "Member 'UWBP_SkillListBoard_C::WBP_SkillListItem_134' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListBoard_C, WBP_SkillListItem_345) == 0x000348, "Member 'UWBP_SkillListBoard_C::WBP_SkillListItem_345' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListBoard_C, WBP_SkillListItem_503) == 0x000350, "Member 'UWBP_SkillListBoard_C::WBP_SkillListItem_503' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListBoard_C, WBP_SkillListItem_627) == 0x000358, "Member 'UWBP_SkillListBoard_C::WBP_SkillListItem_627' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListBoard_C, WBP_SkillListItem_725) == 0x000360, "Member 'UWBP_SkillListBoard_C::WBP_SkillListItem_725' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListBoard_C, WBP_SkillListItem_791) == 0x000368, "Member 'UWBP_SkillListBoard_C::WBP_SkillListItem_791' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListBoard_C, WBP_SkillListItem_904) == 0x000370, "Member 'UWBP_SkillListBoard_C::WBP_SkillListItem_904' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListBoard_C, WBP_SkillListItem_1106) == 0x000378, "Member 'UWBP_SkillListBoard_C::WBP_SkillListItem_1106' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListBoard_C, WBP_SkillTreeHorizon) == 0x000380, "Member 'UWBP_SkillListBoard_C::WBP_SkillTreeHorizon' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListBoard_C, SelectClass) == 0x000388, "Member 'UWBP_SkillListBoard_C::SelectClass' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListBoard_C, OwnerCommandMenu) == 0x000390, "Member 'UWBP_SkillListBoard_C::OwnerCommandMenu' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListBoard_C, OnSubMenuChanged) == 0x000398, "Member 'UWBP_SkillListBoard_C::OnSubMenuChanged' has a wrong offset!");

}

