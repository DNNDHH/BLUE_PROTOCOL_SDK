#pragma once

 

// Package: MyWalletWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CurrencyType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MyWalletWidget.MyWalletWidget_C
// 0x0050 (0x02C8 - 0x0278)
class UMyWalletWidget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       InOut;                                             // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCurrencyWidget_C*                      Money;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           InactiveColor;                                     // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<bool>                                  bIsActive;                                         // 0x02A0(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<class UCurrencyWidget_C*>              CurrencyWidgets;                                   // 0x02B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                         ShowCount;                                         // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MyWalletWidget(int32 EntryPoint);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void PreConstruct_Internal(TArray<class UCurrencyWidget_C*>& Array);
	void SetActive(ECurrencyType InCurrencyType, bool bInActive);
	void Show();
	void Hide();
	void SetBG();

	void IsShow(bool* Result) const;
	void GetCount(int32* Param_ShowCount) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyWalletWidget_C">();
	}
	static class UMyWalletWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyWalletWidget_C>();
	}
};
static_assert(alignof(UMyWalletWidget_C) == 0x000008, "Wrong alignment on UMyWalletWidget_C");
static_assert(sizeof(UMyWalletWidget_C) == 0x0002C8, "Wrong size on UMyWalletWidget_C");
static_assert(offsetof(UMyWalletWidget_C, UberGraphFrame) == 0x000278, "Member 'UMyWalletWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMyWalletWidget_C, InOut) == 0x000280, "Member 'UMyWalletWidget_C::InOut' has a wrong offset!");
static_assert(offsetof(UMyWalletWidget_C, Money) == 0x000288, "Member 'UMyWalletWidget_C::Money' has a wrong offset!");
static_assert(offsetof(UMyWalletWidget_C, InactiveColor) == 0x000290, "Member 'UMyWalletWidget_C::InactiveColor' has a wrong offset!");
static_assert(offsetof(UMyWalletWidget_C, bIsActive) == 0x0002A0, "Member 'UMyWalletWidget_C::bIsActive' has a wrong offset!");
static_assert(offsetof(UMyWalletWidget_C, CurrencyWidgets) == 0x0002B0, "Member 'UMyWalletWidget_C::CurrencyWidgets' has a wrong offset!");
static_assert(offsetof(UMyWalletWidget_C, ShowCount) == 0x0002C0, "Member 'UMyWalletWidget_C::ShowCount' has a wrong offset!");

}

