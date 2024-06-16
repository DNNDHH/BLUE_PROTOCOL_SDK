#pragma once

 

// Package: PaymentIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PaymentIcon.PaymentIcon_C
// 0x0030 (0x02A8 - 0x0278)
class UPaymentIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn_Icon;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Icon;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         IconIndex;                                         // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void OnClicked__DelegateSignature(int32 Param_Index);
	void ExecuteUbergraph_PaymentIcon(int32 EntryPoint);
	void BndEvt__PaymentIcon_Btn_Icon_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void SetIcon(TSoftObjectPtr<class UTexture2D> Icon);
	void OnLoaded_8C0C865A4CBAA0D5999B34AE45734207(class UObject* Loaded);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PaymentIcon_C">();
	}
	static class UPaymentIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPaymentIcon_C>();
	}
};
static_assert(alignof(UPaymentIcon_C) == 0x000008, "Wrong alignment on UPaymentIcon_C");
static_assert(sizeof(UPaymentIcon_C) == 0x0002A8, "Wrong size on UPaymentIcon_C");
static_assert(offsetof(UPaymentIcon_C, UberGraphFrame) == 0x000278, "Member 'UPaymentIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPaymentIcon_C, Btn_Icon) == 0x000280, "Member 'UPaymentIcon_C::Btn_Icon' has a wrong offset!");
static_assert(offsetof(UPaymentIcon_C, Img_Icon) == 0x000288, "Member 'UPaymentIcon_C::Img_Icon' has a wrong offset!");
static_assert(offsetof(UPaymentIcon_C, OnClicked) == 0x000290, "Member 'UPaymentIcon_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UPaymentIcon_C, IconIndex) == 0x0002A0, "Member 'UPaymentIcon_C::IconIndex' has a wrong offset!");

}

