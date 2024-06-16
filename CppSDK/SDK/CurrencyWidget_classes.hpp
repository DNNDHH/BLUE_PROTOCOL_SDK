#pragma once

 

// Package: CurrencyWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CurrencyType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CurrencyWidget.CurrencyWidget_C
// 0x0070 (0x02E8 - 0x0278)
class UCurrencyWidget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Bg1;                                               // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Engram;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_GC;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Money;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_Amount;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Root;                                              // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_0;                                  // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ECurrencyType                                 CurrencyType;                                      // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_4B49[0x3];                                     // 0x02B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              DefaultSize;                                       // 0x02BC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bActive;                                           // 0x02C4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_4B4A[0x3];                                     // 0x02C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              InactiveSize;                                      // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           InactiveColor;                                     // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         CachedAmount;                                      // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BgB;                                               // 0x02E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_CurrencyWidget(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void SetActive(bool bInActive, bool bInForce);
	void UpdateAmount();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CurrencyWidget_C">();
	}
	static class UCurrencyWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCurrencyWidget_C>();
	}
};
static_assert(alignof(UCurrencyWidget_C) == 0x000008, "Wrong alignment on UCurrencyWidget_C");
static_assert(sizeof(UCurrencyWidget_C) == 0x0002E8, "Wrong size on UCurrencyWidget_C");
static_assert(offsetof(UCurrencyWidget_C, UberGraphFrame) == 0x000278, "Member 'UCurrencyWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCurrencyWidget_C, Bg1) == 0x000280, "Member 'UCurrencyWidget_C::Bg1' has a wrong offset!");
static_assert(offsetof(UCurrencyWidget_C, Image_Engram) == 0x000288, "Member 'UCurrencyWidget_C::Image_Engram' has a wrong offset!");
static_assert(offsetof(UCurrencyWidget_C, Image_GC) == 0x000290, "Member 'UCurrencyWidget_C::Image_GC' has a wrong offset!");
static_assert(offsetof(UCurrencyWidget_C, Image_Money) == 0x000298, "Member 'UCurrencyWidget_C::Image_Money' has a wrong offset!");
static_assert(offsetof(UCurrencyWidget_C, Label_Amount) == 0x0002A0, "Member 'UCurrencyWidget_C::Label_Amount' has a wrong offset!");
static_assert(offsetof(UCurrencyWidget_C, Root) == 0x0002A8, "Member 'UCurrencyWidget_C::Root' has a wrong offset!");
static_assert(offsetof(UCurrencyWidget_C, WidgetSwitcher_0) == 0x0002B0, "Member 'UCurrencyWidget_C::WidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UCurrencyWidget_C, CurrencyType) == 0x0002B8, "Member 'UCurrencyWidget_C::CurrencyType' has a wrong offset!");
static_assert(offsetof(UCurrencyWidget_C, DefaultSize) == 0x0002BC, "Member 'UCurrencyWidget_C::DefaultSize' has a wrong offset!");
static_assert(offsetof(UCurrencyWidget_C, bActive) == 0x0002C4, "Member 'UCurrencyWidget_C::bActive' has a wrong offset!");
static_assert(offsetof(UCurrencyWidget_C, InactiveSize) == 0x0002C8, "Member 'UCurrencyWidget_C::InactiveSize' has a wrong offset!");
static_assert(offsetof(UCurrencyWidget_C, InactiveColor) == 0x0002D0, "Member 'UCurrencyWidget_C::InactiveColor' has a wrong offset!");
static_assert(offsetof(UCurrencyWidget_C, CachedAmount) == 0x0002E0, "Member 'UCurrencyWidget_C::CachedAmount' has a wrong offset!");
static_assert(offsetof(UCurrencyWidget_C, BgB) == 0x0002E4, "Member 'UCurrencyWidget_C::BgB' has a wrong offset!");

}

