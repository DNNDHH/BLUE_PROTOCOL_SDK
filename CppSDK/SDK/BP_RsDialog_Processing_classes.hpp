#pragma once

 

// Package: BP_RsDialog_Processing

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_RsDialog_Processing.BP_RsDialog_Processing_C
// 0x0028 (0x02A0 - 0x0278)
class UBP_RsDialog_Processing_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_NowLoading_C*                       BP_NowLoading;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Message;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnDialogEnd;                                       // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnDialogEnd__DelegateSignature();
	void ExecuteUbergraph_BP_RsDialog_Processing(int32 EntryPoint);
	void StartAnim();
	void StopAnim();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RsDialog_Processing_C">();
	}
	static class UBP_RsDialog_Processing_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_RsDialog_Processing_C>();
	}
};
static_assert(alignof(UBP_RsDialog_Processing_C) == 0x000008, "Wrong alignment on UBP_RsDialog_Processing_C");
static_assert(sizeof(UBP_RsDialog_Processing_C) == 0x0002A0, "Wrong size on UBP_RsDialog_Processing_C");
static_assert(offsetof(UBP_RsDialog_Processing_C, UberGraphFrame) == 0x000278, "Member 'UBP_RsDialog_Processing_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Processing_C, BP_NowLoading) == 0x000280, "Member 'UBP_RsDialog_Processing_C::BP_NowLoading' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Processing_C, Txt_Message) == 0x000288, "Member 'UBP_RsDialog_Processing_C::Txt_Message' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Processing_C, OnDialogEnd) == 0x000290, "Member 'UBP_RsDialog_Processing_C::OnDialogEnd' has a wrong offset!");

}

