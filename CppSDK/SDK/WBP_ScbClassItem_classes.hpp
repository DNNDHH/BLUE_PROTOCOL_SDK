#pragma once

 

// Package: WBP_ScbClassItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ScbClassItem.WBP_ScbClassItem_C
// 0x0170 (0x03E8 - 0x0278)
class UWBP_ScbClassItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UClassIcon_C*                           ClassIcon;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_Star10;                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_ClassType0;                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_ClassType1;                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_ConditionLevel;                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_CurrentLevel;                            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScbValueItem_C*                    ValueItem_Dex;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScbValueItem_C*                    ValueItem_Hp;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScbValueItem_C*                    ValueItem_Int;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScbValueItem_C*                    ValueItem_Mnd;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScbValueItem_C*                    ValueItem_Str;                                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScbValueItem_C*                    ValueItem_Vit;                                     // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScbStar_C*                         WBP_ScbStar_0;                                     // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScbStar_C*                         WBP_ScbStar_1;                                     // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScbStar_C*                         WBP_ScbStar_2;                                     // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScbStar_C*                         WBP_ScbStar_3;                                     // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScbStar_C*                         WBP_ScbStar_4;                                     // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScbStar_C*                         WBP_ScbStar_5;                                     // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScbStar_C*                         WBP_ScbStar_10;                                    // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScbStar_C*                         WBP_ScbStar_11;                                    // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScbStar_C*                         WBP_ScbStar_12;                                    // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScbStar_C*                         WBP_ScbStar_13;                                    // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScbStar_C*                         WBP_ScbStar_14;                                    // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScbStar_C*                         WBP_ScbStar_15;                                    // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScbStar_C*                         WBP_ScbStar_16;                                    // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScbStar_C*                         WBP_ScbStar_17;                                    // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScbStar_C*                         WBP_ScbStar_18;                                    // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScbStar_C*                         WBP_ScbStar_19;                                    // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScbStar_C*                         WBP_ScbStar_00;                                    // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScbStar_C*                         WBP_ScbStar_01;                                    // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScbStar_C*                         WBP_ScbStar_02;                                    // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScbStar_C*                         WBP_ScbStar_03;                                    // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScbStar_C*                         WBP_ScbStar_04;                                    // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScbStar_C*                         WBP_ScbStar_05;                                    // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScbStar_C*                         WBP_ScbStar_06;                                    // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScbStar_C*                         WBP_ScbStar_07;                                    // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScbStar_C*                         WBP_ScbStar_08;                                    // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScbStar_C*                         WBP_ScbStar_09;                                    // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_ConditionOrLimit;                   // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_RankOrCondition;                    // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Star;                               // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_ScbValueItem_C*>            ValueItemList;                                     // 0x03C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<int32>                                 ValueList;                                         // 0x03D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_WBP_ScbClassItem(int32 EntryPoint);
	void SetConditionData(const struct FSBScbClassConditionsData& Data);
	void SetRankData(const struct FSBScbClassData& Data);
	void Construct();
	void ShowRankStar(int32 MaxRank, int32 Rank);
	void SetClassType(ESBClassType InClassType);
	void SetClassName(ESBClassType InClassType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ScbClassItem_C">();
	}
	static class UWBP_ScbClassItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ScbClassItem_C>();
	}
};
static_assert(alignof(UWBP_ScbClassItem_C) == 0x000008, "Wrong alignment on UWBP_ScbClassItem_C");
static_assert(sizeof(UWBP_ScbClassItem_C) == 0x0003E8, "Wrong size on UWBP_ScbClassItem_C");
static_assert(offsetof(UWBP_ScbClassItem_C, UberGraphFrame) == 0x000278, "Member 'UWBP_ScbClassItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ScbClassItem_C, ClassIcon) == 0x000280, "Member 'UWBP_ScbClassItem_C::ClassIcon' has a wrong offset!");
static_assert(offsetof(UWBP_ScbClassItem_C, HorizontalBox_Star10) == 0x000288, "Member 'UWBP_ScbClassItem_C::HorizontalBox_Star10' has a wrong offset!");
static_assert(offsetof(UWBP_ScbClassItem_C, TextBlock_ClassType0) == 0x000290, "Member 'UWBP_ScbClassItem_C::TextBlock_ClassType0' has a wrong offset!");
static_assert(offsetof(UWBP_ScbClassItem_C, TextBlock_ClassType1) == 0x000298, "Member 'UWBP_ScbClassItem_C::TextBlock_ClassType1' has a wrong offset!");
static_assert(offsetof(UWBP_ScbClassItem_C, TextBlock_ConditionLevel) == 0x0002A0, "Member 'UWBP_ScbClassItem_C::TextBlock_ConditionLevel' has a wrong offset!");
static_assert(offsetof(UWBP_ScbClassItem_C, TextBlock_CurrentLevel) == 0x0002A8, "Member 'UWBP_ScbClassItem_C::TextBlock_CurrentLevel' has a wrong offset!");
static_assert(offsetof(UWBP_ScbClassItem_C, ValueItem_Dex) == 0x0002B0, "Member 'UWBP_ScbClassItem_C::ValueItem_Dex' has a wrong offset!");
static_assert(offsetof(UWBP_ScbClassItem_C, ValueItem_Hp) == 0x0002B8, "Member 'UWBP_ScbClassItem_C::ValueItem_Hp' has a wrong offset!");
static_assert(offsetof(UWBP_ScbClassItem_C, ValueItem_Int) == 0x0002C0, "Member 'UWBP_ScbClassItem_C::ValueItem_Int' has a wrong offset!");
static_assert(offsetof(UWBP_ScbClassItem_C, ValueItem_Mnd) == 0x0002C8, "Member 'UWBP_ScbClassItem_C::ValueItem_Mnd' has a wrong offset!");
static_assert(offsetof(UWBP_ScbClassItem_C, ValueItem_Str) == 0x0002D0, "Member 'UWBP_ScbClassItem_C::ValueItem_Str' has a wrong offset!");
static_assert(offsetof(UWBP_ScbClassItem_C, ValueItem_Vit) == 0x0002D8, "Member 'UWBP_ScbClassItem_C::ValueItem_Vit' has a wrong offset!");
static_assert(offsetof(UWBP_ScbClassItem_C, WBP_ScbStar_0) == 0x0002E0, "Member 'UWBP_ScbClassItem_C::WBP_ScbStar_0' has a wrong offset!");
static_assert(offsetof(UWBP_ScbClassItem_C, WBP_ScbStar_1) == 0x0002E8, "Member 'UWBP_ScbClassItem_C::WBP_ScbStar_1' has a wrong offset!");
static_assert(offsetof(UWBP_ScbClassItem_C, WBP_ScbStar_2) == 0x0002F0, "Member 'UWBP_ScbClassItem_C::WBP_ScbStar_2' has a wrong offset!");
static_assert(offsetof(UWBP_ScbClassItem_C, WBP_ScbStar_3) == 0x0002F8, "Member 'UWBP_ScbClassItem_C::WBP_ScbStar_3' has a wrong offset!");
static_assert(offsetof(UWBP_ScbClassItem_C, WBP_ScbStar_4) == 0x000300, "Member 'UWBP_ScbClassItem_C::WBP_ScbStar_4' has a wrong offset!");
static_assert(offsetof(UWBP_ScbClassItem_C, WBP_ScbStar_5) == 0x000308, "Member 'UWBP_ScbClassItem_C::WBP_ScbStar_5' has a wrong offset!");
static_assert(offsetof(UWBP_ScbClassItem_C, WBP_ScbStar_10) == 0x000310, "Member 'UWBP_ScbClassItem_C::WBP_ScbStar_10' has a wrong offset!");
static_assert(offsetof(UWBP_ScbClassItem_C, WBP_ScbStar_11) == 0x000318, "Member 'UWBP_ScbClassItem_C::WBP_ScbStar_11' has a wrong offset!");
static_assert(offsetof(UWBP_ScbClassItem_C, WBP_ScbStar_12) == 0x000320, "Member 'UWBP_ScbClassItem_C::WBP_ScbStar_12' has a wrong offset!");
static_assert(offsetof(UWBP_ScbClassItem_C, WBP_ScbStar_13) == 0x000328, "Member 'UWBP_ScbClassItem_C::WBP_ScbStar_13' has a wrong offset!");
static_assert(offsetof(UWBP_ScbClassItem_C, WBP_ScbStar_14) == 0x000330, "Member 'UWBP_ScbClassItem_C::WBP_ScbStar_14' has a wrong offset!");
static_assert(offsetof(UWBP_ScbClassItem_C, WBP_ScbStar_15) == 0x000338, "Member 'UWBP_ScbClassItem_C::WBP_ScbStar_15' has a wrong offset!");
static_assert(offsetof(UWBP_ScbClassItem_C, WBP_ScbStar_16) == 0x000340, "Member 'UWBP_ScbClassItem_C::WBP_ScbStar_16' has a wrong offset!");
static_assert(offsetof(UWBP_ScbClassItem_C, WBP_ScbStar_17) == 0x000348, "Member 'UWBP_ScbClassItem_C::WBP_ScbStar_17' has a wrong offset!");
static_assert(offsetof(UWBP_ScbClassItem_C, WBP_ScbStar_18) == 0x000350, "Member 'UWBP_ScbClassItem_C::WBP_ScbStar_18' has a wrong offset!");
static_assert(offsetof(UWBP_ScbClassItem_C, WBP_ScbStar_19) == 0x000358, "Member 'UWBP_ScbClassItem_C::WBP_ScbStar_19' has a wrong offset!");
static_assert(offsetof(UWBP_ScbClassItem_C, WBP_ScbStar_00) == 0x000360, "Member 'UWBP_ScbClassItem_C::WBP_ScbStar_00' has a wrong offset!");
static_assert(offsetof(UWBP_ScbClassItem_C, WBP_ScbStar_01) == 0x000368, "Member 'UWBP_ScbClassItem_C::WBP_ScbStar_01' has a wrong offset!");
static_assert(offsetof(UWBP_ScbClassItem_C, WBP_ScbStar_02) == 0x000370, "Member 'UWBP_ScbClassItem_C::WBP_ScbStar_02' has a wrong offset!");
static_assert(offsetof(UWBP_ScbClassItem_C, WBP_ScbStar_03) == 0x000378, "Member 'UWBP_ScbClassItem_C::WBP_ScbStar_03' has a wrong offset!");
static_assert(offsetof(UWBP_ScbClassItem_C, WBP_ScbStar_04) == 0x000380, "Member 'UWBP_ScbClassItem_C::WBP_ScbStar_04' has a wrong offset!");
static_assert(offsetof(UWBP_ScbClassItem_C, WBP_ScbStar_05) == 0x000388, "Member 'UWBP_ScbClassItem_C::WBP_ScbStar_05' has a wrong offset!");
static_assert(offsetof(UWBP_ScbClassItem_C, WBP_ScbStar_06) == 0x000390, "Member 'UWBP_ScbClassItem_C::WBP_ScbStar_06' has a wrong offset!");
static_assert(offsetof(UWBP_ScbClassItem_C, WBP_ScbStar_07) == 0x000398, "Member 'UWBP_ScbClassItem_C::WBP_ScbStar_07' has a wrong offset!");
static_assert(offsetof(UWBP_ScbClassItem_C, WBP_ScbStar_08) == 0x0003A0, "Member 'UWBP_ScbClassItem_C::WBP_ScbStar_08' has a wrong offset!");
static_assert(offsetof(UWBP_ScbClassItem_C, WBP_ScbStar_09) == 0x0003A8, "Member 'UWBP_ScbClassItem_C::WBP_ScbStar_09' has a wrong offset!");
static_assert(offsetof(UWBP_ScbClassItem_C, WidgetSwitcher_ConditionOrLimit) == 0x0003B0, "Member 'UWBP_ScbClassItem_C::WidgetSwitcher_ConditionOrLimit' has a wrong offset!");
static_assert(offsetof(UWBP_ScbClassItem_C, WidgetSwitcher_RankOrCondition) == 0x0003B8, "Member 'UWBP_ScbClassItem_C::WidgetSwitcher_RankOrCondition' has a wrong offset!");
static_assert(offsetof(UWBP_ScbClassItem_C, WidgetSwitcher_Star) == 0x0003C0, "Member 'UWBP_ScbClassItem_C::WidgetSwitcher_Star' has a wrong offset!");
static_assert(offsetof(UWBP_ScbClassItem_C, ValueItemList) == 0x0003C8, "Member 'UWBP_ScbClassItem_C::ValueItemList' has a wrong offset!");
static_assert(offsetof(UWBP_ScbClassItem_C, ValueList) == 0x0003D8, "Member 'UWBP_ScbClassItem_C::ValueList' has a wrong offset!");

}

