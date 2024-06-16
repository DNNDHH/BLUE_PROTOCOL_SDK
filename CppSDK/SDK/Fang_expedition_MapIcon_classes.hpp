#pragma once

 

// Package: Fang_expedition_MapIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fang_expedition_MapIcon.Fang_expedition_MapIcon_C
// 0x0090 (0x0308 - 0x0278)
class UFang_expedition_MapIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnmIconPlay;                                       // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnmIconFinish;                                     // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Finish_AnmImage;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Finish_Eff;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Play_Eff;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        IconSwitcher;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ManyExpedition;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NewIcon;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SelectButton;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TimeIcon;                                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnIconSelect;                                      // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 ExpeditionId;                                      // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnMultiIconSelect;                                 // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         IconID;                                            // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnIconSelect__DelegateSignature(const class FString& ID);
	void OnMultiIconSelect__DelegateSignature(int32 Param_Index);
	void ExecuteUbergraph_Fang_expedition_MapIcon(int32 EntryPoint);
	void BndEvt__Fang_expedition_MapIcon_SelectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetData(const class FString& ID, int32 IconType, bool Param_NewIcon, bool Param_TimeIcon);
	void SetIconData(const struct FSBFang_expeditionIconData& IconData);
	void SetIconStatus(ESBFang_expeditionStatus Status, bool Multi, bool Time, bool New);
	void CheckNewMark(TArray<class FString>& InAreaList, bool* OutParam);
	void ClearNewMark(const class FString& InParam);
	void GetIconID(int32* OutParam);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fang_expedition_MapIcon_C">();
	}
	static class UFang_expedition_MapIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFang_expedition_MapIcon_C>();
	}
};
static_assert(alignof(UFang_expedition_MapIcon_C) == 0x000008, "Wrong alignment on UFang_expedition_MapIcon_C");
static_assert(sizeof(UFang_expedition_MapIcon_C) == 0x000308, "Wrong size on UFang_expedition_MapIcon_C");
static_assert(offsetof(UFang_expedition_MapIcon_C, UberGraphFrame) == 0x000278, "Member 'UFang_expedition_MapIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFang_expedition_MapIcon_C, AnmIconPlay) == 0x000280, "Member 'UFang_expedition_MapIcon_C::AnmIconPlay' has a wrong offset!");
static_assert(offsetof(UFang_expedition_MapIcon_C, AnmIconFinish) == 0x000288, "Member 'UFang_expedition_MapIcon_C::AnmIconFinish' has a wrong offset!");
static_assert(offsetof(UFang_expedition_MapIcon_C, Finish_AnmImage) == 0x000290, "Member 'UFang_expedition_MapIcon_C::Finish_AnmImage' has a wrong offset!");
static_assert(offsetof(UFang_expedition_MapIcon_C, Icon_Finish_Eff) == 0x000298, "Member 'UFang_expedition_MapIcon_C::Icon_Finish_Eff' has a wrong offset!");
static_assert(offsetof(UFang_expedition_MapIcon_C, Icon_Play_Eff) == 0x0002A0, "Member 'UFang_expedition_MapIcon_C::Icon_Play_Eff' has a wrong offset!");
static_assert(offsetof(UFang_expedition_MapIcon_C, IconSwitcher) == 0x0002A8, "Member 'UFang_expedition_MapIcon_C::IconSwitcher' has a wrong offset!");
static_assert(offsetof(UFang_expedition_MapIcon_C, ManyExpedition) == 0x0002B0, "Member 'UFang_expedition_MapIcon_C::ManyExpedition' has a wrong offset!");
static_assert(offsetof(UFang_expedition_MapIcon_C, NewIcon) == 0x0002B8, "Member 'UFang_expedition_MapIcon_C::NewIcon' has a wrong offset!");
static_assert(offsetof(UFang_expedition_MapIcon_C, SelectButton) == 0x0002C0, "Member 'UFang_expedition_MapIcon_C::SelectButton' has a wrong offset!");
static_assert(offsetof(UFang_expedition_MapIcon_C, TimeIcon) == 0x0002C8, "Member 'UFang_expedition_MapIcon_C::TimeIcon' has a wrong offset!");
static_assert(offsetof(UFang_expedition_MapIcon_C, OnIconSelect) == 0x0002D0, "Member 'UFang_expedition_MapIcon_C::OnIconSelect' has a wrong offset!");
static_assert(offsetof(UFang_expedition_MapIcon_C, ExpeditionId) == 0x0002E0, "Member 'UFang_expedition_MapIcon_C::ExpeditionId' has a wrong offset!");
static_assert(offsetof(UFang_expedition_MapIcon_C, OnMultiIconSelect) == 0x0002F0, "Member 'UFang_expedition_MapIcon_C::OnMultiIconSelect' has a wrong offset!");
static_assert(offsetof(UFang_expedition_MapIcon_C, IconID) == 0x000300, "Member 'UFang_expedition_MapIcon_C::IconID' has a wrong offset!");

}

