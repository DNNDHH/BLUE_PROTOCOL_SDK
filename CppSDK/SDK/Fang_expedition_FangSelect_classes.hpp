#pragma once

 

// Package: Fang_expedition_FangSelect

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fang_expedition_FangSelect.Fang_expedition_FangSelect_C
// 0x0070 (0x02E8 - 0x0278)
class UFang_expedition_FangSelect_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_LineEff;                                       // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UFang_expedition_IconList_C*            Fang_expedition_IconList;                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_Eff;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Select_Arrow;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Select_Base;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Select_Base_Bk;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Select_BG01;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Select_BG02;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Select_HLine_1;                                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Select_HLine_2;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Select_VLine;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnFangSelectChange;                                // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnFangSelectChange__DelegateSignature(TArray<class FString>& UniqueId);
	void ExecuteUbergraph_Fang_expedition_FangSelect(int32 EntryPoint);
	void Destruct();
	void UnbindFunction();
	void BindFunction();
	void Construct();
	void InitFangList(int32 FangCount);
	void InitFangList_UniqueId(int32 FangCount, TArray<class FString>& UniqueId);
	void CB_FangSelectChange(TArray<class FString>& UniqueId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fang_expedition_FangSelect_C">();
	}
	static class UFang_expedition_FangSelect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFang_expedition_FangSelect_C>();
	}
};
static_assert(alignof(UFang_expedition_FangSelect_C) == 0x000008, "Wrong alignment on UFang_expedition_FangSelect_C");
static_assert(sizeof(UFang_expedition_FangSelect_C) == 0x0002E8, "Wrong size on UFang_expedition_FangSelect_C");
static_assert(offsetof(UFang_expedition_FangSelect_C, UberGraphFrame) == 0x000278, "Member 'UFang_expedition_FangSelect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFang_expedition_FangSelect_C, Anm_LineEff) == 0x000280, "Member 'UFang_expedition_FangSelect_C::Anm_LineEff' has a wrong offset!");
static_assert(offsetof(UFang_expedition_FangSelect_C, Fang_expedition_IconList) == 0x000288, "Member 'UFang_expedition_FangSelect_C::Fang_expedition_IconList' has a wrong offset!");
static_assert(offsetof(UFang_expedition_FangSelect_C, Line_Eff) == 0x000290, "Member 'UFang_expedition_FangSelect_C::Line_Eff' has a wrong offset!");
static_assert(offsetof(UFang_expedition_FangSelect_C, Select_Arrow) == 0x000298, "Member 'UFang_expedition_FangSelect_C::Select_Arrow' has a wrong offset!");
static_assert(offsetof(UFang_expedition_FangSelect_C, Select_Base) == 0x0002A0, "Member 'UFang_expedition_FangSelect_C::Select_Base' has a wrong offset!");
static_assert(offsetof(UFang_expedition_FangSelect_C, Select_Base_Bk) == 0x0002A8, "Member 'UFang_expedition_FangSelect_C::Select_Base_Bk' has a wrong offset!");
static_assert(offsetof(UFang_expedition_FangSelect_C, Select_BG01) == 0x0002B0, "Member 'UFang_expedition_FangSelect_C::Select_BG01' has a wrong offset!");
static_assert(offsetof(UFang_expedition_FangSelect_C, Select_BG02) == 0x0002B8, "Member 'UFang_expedition_FangSelect_C::Select_BG02' has a wrong offset!");
static_assert(offsetof(UFang_expedition_FangSelect_C, Select_HLine_1) == 0x0002C0, "Member 'UFang_expedition_FangSelect_C::Select_HLine_1' has a wrong offset!");
static_assert(offsetof(UFang_expedition_FangSelect_C, Select_HLine_2) == 0x0002C8, "Member 'UFang_expedition_FangSelect_C::Select_HLine_2' has a wrong offset!");
static_assert(offsetof(UFang_expedition_FangSelect_C, Select_VLine) == 0x0002D0, "Member 'UFang_expedition_FangSelect_C::Select_VLine' has a wrong offset!");
static_assert(offsetof(UFang_expedition_FangSelect_C, OnFangSelectChange) == 0x0002D8, "Member 'UFang_expedition_FangSelect_C::OnFangSelectChange' has a wrong offset!");

}

