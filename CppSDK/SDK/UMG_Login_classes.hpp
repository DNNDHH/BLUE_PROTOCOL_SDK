#pragma once

 

// Package: UMG_Login

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_Login.UMG_Login_C
// 0x00A0 (0x0318 - 0x0278)
class UUMG_Login_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCmnBtn05_C*                            BtnLogin;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn05_C*                            BtnRegister;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       EMailInput;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line1;                                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       PasswordInput;                                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBox_C*                          RemenberMeCheck;                                   // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TextBg1;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TextBG2;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnLogin;                                           // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnRegister;                                        // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bShow;                                             // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E49[0x7];                                     // 0x02F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLoginSaveGame*                       LoginCache;                                        // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CacheSlotName;                                     // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void SaveLoginCache();
	void HideWindow();
	void ShowWindow();
	void LoadLoginCache();
	void Init();
	void SetSaveData(const class FString& EMail, const class FString& Password, bool RememberMe);
	void GetSaveData(class FString* EMail, class FString* Password, bool* RemenberMe);
	void ShowErrorDialog(const class FText& ErrorText);
	void BndEvt__BtnLogin_K2Node_ComponentBoundEvent_275_EventOnClicked__DelegateSignature();
	void BndEvt__BtnRegister_K2Node_ComponentBoundEvent_276_EventOnClicked__DelegateSignature();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void Construct();
	void ExecuteUbergraph_UMG_Login(int32 EntryPoint);
	void OnRegister__DelegateSignature();
	void OnLogin__DelegateSignature(const class FString& EMail, const class FString& Password);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_Login_C">();
	}
	static class UUMG_Login_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_Login_C>();
	}
};
static_assert(alignof(UUMG_Login_C) == 0x000008, "Wrong alignment on UUMG_Login_C");
static_assert(sizeof(UUMG_Login_C) == 0x000318, "Wrong size on UUMG_Login_C");
static_assert(offsetof(UUMG_Login_C, UberGraphFrame) == 0x000278, "Member 'UUMG_Login_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_Login_C, AnimOut) == 0x000280, "Member 'UUMG_Login_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UUMG_Login_C, AnimIn) == 0x000288, "Member 'UUMG_Login_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UUMG_Login_C, BtnLogin) == 0x000290, "Member 'UUMG_Login_C::BtnLogin' has a wrong offset!");
static_assert(offsetof(UUMG_Login_C, BtnRegister) == 0x000298, "Member 'UUMG_Login_C::BtnRegister' has a wrong offset!");
static_assert(offsetof(UUMG_Login_C, EMailInput) == 0x0002A0, "Member 'UUMG_Login_C::EMailInput' has a wrong offset!");
static_assert(offsetof(UUMG_Login_C, Image_0) == 0x0002A8, "Member 'UUMG_Login_C::Image_0' has a wrong offset!");
static_assert(offsetof(UUMG_Login_C, Line1) == 0x0002B0, "Member 'UUMG_Login_C::Line1' has a wrong offset!");
static_assert(offsetof(UUMG_Login_C, PasswordInput) == 0x0002B8, "Member 'UUMG_Login_C::PasswordInput' has a wrong offset!");
static_assert(offsetof(UUMG_Login_C, RemenberMeCheck) == 0x0002C0, "Member 'UUMG_Login_C::RemenberMeCheck' has a wrong offset!");
static_assert(offsetof(UUMG_Login_C, TextBg1) == 0x0002C8, "Member 'UUMG_Login_C::TextBg1' has a wrong offset!");
static_assert(offsetof(UUMG_Login_C, TextBG2) == 0x0002D0, "Member 'UUMG_Login_C::TextBG2' has a wrong offset!");
static_assert(offsetof(UUMG_Login_C, OnLogin) == 0x0002D8, "Member 'UUMG_Login_C::OnLogin' has a wrong offset!");
static_assert(offsetof(UUMG_Login_C, OnRegister) == 0x0002E8, "Member 'UUMG_Login_C::OnRegister' has a wrong offset!");
static_assert(offsetof(UUMG_Login_C, bShow) == 0x0002F8, "Member 'UUMG_Login_C::bShow' has a wrong offset!");
static_assert(offsetof(UUMG_Login_C, LoginCache) == 0x000300, "Member 'UUMG_Login_C::LoginCache' has a wrong offset!");
static_assert(offsetof(UUMG_Login_C, CacheSlotName) == 0x000308, "Member 'UUMG_Login_C::CacheSlotName' has a wrong offset!");

}

