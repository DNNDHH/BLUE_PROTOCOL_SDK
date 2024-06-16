#pragma once

 

// Package: Fang_expedition_DetailAreaName

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fang_expedition_DetailAreaName.Fang_expedition_DetailAreaName_C
// 0x0068 (0x02E0 - 0x0278)
class UFang_expedition_DetailAreaName_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             AreaName;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_Finish;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_Play;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_Standby;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnGauge1_C*                           CmnGauge1;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           GaugeBox;                                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InfoIcon;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MasteryNum;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NextExp;                                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NowExp;                                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        TitleBase_Switcher;                                // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIconToolTipContent_MultiLine_C*  ToolTip;                                           // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Fang_expedition_DetailAreaName(int32 EntryPoint);
	void Destruct();
	void Construct();
	void SetData(const struct FSBFang_expeditionAreaData& AreaData, ESBFang_expeditionStatus Status);
	void SetMasteryVisible(bool Visible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fang_expedition_DetailAreaName_C">();
	}
	static class UFang_expedition_DetailAreaName_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFang_expedition_DetailAreaName_C>();
	}
};
static_assert(alignof(UFang_expedition_DetailAreaName_C) == 0x000008, "Wrong alignment on UFang_expedition_DetailAreaName_C");
static_assert(sizeof(UFang_expedition_DetailAreaName_C) == 0x0002E0, "Wrong size on UFang_expedition_DetailAreaName_C");
static_assert(offsetof(UFang_expedition_DetailAreaName_C, UberGraphFrame) == 0x000278, "Member 'UFang_expedition_DetailAreaName_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailAreaName_C, AreaName) == 0x000280, "Member 'UFang_expedition_DetailAreaName_C::AreaName' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailAreaName_C, BG_Finish) == 0x000288, "Member 'UFang_expedition_DetailAreaName_C::BG_Finish' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailAreaName_C, BG_Play) == 0x000290, "Member 'UFang_expedition_DetailAreaName_C::BG_Play' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailAreaName_C, BG_Standby) == 0x000298, "Member 'UFang_expedition_DetailAreaName_C::BG_Standby' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailAreaName_C, CmnGauge1) == 0x0002A0, "Member 'UFang_expedition_DetailAreaName_C::CmnGauge1' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailAreaName_C, GaugeBox) == 0x0002A8, "Member 'UFang_expedition_DetailAreaName_C::GaugeBox' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailAreaName_C, InfoIcon) == 0x0002B0, "Member 'UFang_expedition_DetailAreaName_C::InfoIcon' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailAreaName_C, MasteryNum) == 0x0002B8, "Member 'UFang_expedition_DetailAreaName_C::MasteryNum' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailAreaName_C, NextExp) == 0x0002C0, "Member 'UFang_expedition_DetailAreaName_C::NextExp' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailAreaName_C, NowExp) == 0x0002C8, "Member 'UFang_expedition_DetailAreaName_C::NowExp' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailAreaName_C, TitleBase_Switcher) == 0x0002D0, "Member 'UFang_expedition_DetailAreaName_C::TitleBase_Switcher' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailAreaName_C, ToolTip) == 0x0002D8, "Member 'UFang_expedition_DetailAreaName_C::ToolTip' has a wrong offset!");

}

