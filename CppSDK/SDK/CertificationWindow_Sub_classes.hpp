#pragma once

 

// Package: CertificationWindow_Sub

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CertificationWindow_Sub.CertificationWindow_Sub_C
// 0x0040 (0x02F0 - 0x02B0)
class UCertificationWindow_Sub_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBRuntimeTextBlock*                    Txt_Caution01;                                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Caution02;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Caution03;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnRequest;                                         // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClose__DelegateSignature();
	void OnRequest__DelegateSignature(int32 Year, int32 Month);
	void ExecuteUbergraph_CertificationWindow_Sub(int32 EntryPoint);
	void SetText_MasterData(const struct FSBPaymentLimitMasterData& Data);
	void GetTextId_AgeLimit(int32 Lower, int32 Upper, class FText* Text);
	void GetTextId_ValueLimit(int32 Upper, int32 Value, class FText* Text);
	void GetTextId_Monthly(int32 Upper, class FText* Text);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CertificationWindow_Sub_C">();
	}
	static class UCertificationWindow_Sub_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCertificationWindow_Sub_C>();
	}
};
static_assert(alignof(UCertificationWindow_Sub_C) == 0x000008, "Wrong alignment on UCertificationWindow_Sub_C");
static_assert(sizeof(UCertificationWindow_Sub_C) == 0x0002F0, "Wrong size on UCertificationWindow_Sub_C");
static_assert(offsetof(UCertificationWindow_Sub_C, UberGraphFrame) == 0x0002B0, "Member 'UCertificationWindow_Sub_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCertificationWindow_Sub_C, Txt_Caution01) == 0x0002B8, "Member 'UCertificationWindow_Sub_C::Txt_Caution01' has a wrong offset!");
static_assert(offsetof(UCertificationWindow_Sub_C, Txt_Caution02) == 0x0002C0, "Member 'UCertificationWindow_Sub_C::Txt_Caution02' has a wrong offset!");
static_assert(offsetof(UCertificationWindow_Sub_C, Txt_Caution03) == 0x0002C8, "Member 'UCertificationWindow_Sub_C::Txt_Caution03' has a wrong offset!");
static_assert(offsetof(UCertificationWindow_Sub_C, OnClose) == 0x0002D0, "Member 'UCertificationWindow_Sub_C::OnClose' has a wrong offset!");
static_assert(offsetof(UCertificationWindow_Sub_C, OnRequest) == 0x0002E0, "Member 'UCertificationWindow_Sub_C::OnRequest' has a wrong offset!");

}

