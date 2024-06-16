#pragma once

 

// Package: UMG_BNIDLoginBrowser

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_BNIDLoginBrowser.UMG_BNIDLoginBrowser_C
// 0x0058 (0x02D0 - 0x0278)
class UUMG_BNIDLoginBrowser_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWebBrowser*                            WebBrowser_0;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bLoginFinished;                                    // 0x0288(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E0D[0x7];                                     // 0x0289(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ApiToken;                                          // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 LoginPageURL;                                      // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                 LoginCbPageUrl;                                    // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnLoginCompleted;                                  // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void Construct();
	void BndEvt__WebBrowser_0_K2Node_ComponentBoundEvent_0_OnUrlChanged__DelegateSignature(const class FText& Text);
	void LoginCompleted();
	void Destruct();
	void BndEvt__WebBrowser_0_K2Node_ComponentBoundEvent_1_OnBeforePopup__DelegateSignature(const class FString& URL, const class FString& Frame);
	void ExecuteUbergraph_UMG_BNIDLoginBrowser(int32 EntryPoint);
	void OnLoginCompleted__DelegateSignature(const class FString& Param_ApiToken);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_BNIDLoginBrowser_C">();
	}
	static class UUMG_BNIDLoginBrowser_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_BNIDLoginBrowser_C>();
	}
};
static_assert(alignof(UUMG_BNIDLoginBrowser_C) == 0x000008, "Wrong alignment on UUMG_BNIDLoginBrowser_C");
static_assert(sizeof(UUMG_BNIDLoginBrowser_C) == 0x0002D0, "Wrong size on UUMG_BNIDLoginBrowser_C");
static_assert(offsetof(UUMG_BNIDLoginBrowser_C, UberGraphFrame) == 0x000278, "Member 'UUMG_BNIDLoginBrowser_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_BNIDLoginBrowser_C, WebBrowser_0) == 0x000280, "Member 'UUMG_BNIDLoginBrowser_C::WebBrowser_0' has a wrong offset!");
static_assert(offsetof(UUMG_BNIDLoginBrowser_C, bLoginFinished) == 0x000288, "Member 'UUMG_BNIDLoginBrowser_C::bLoginFinished' has a wrong offset!");
static_assert(offsetof(UUMG_BNIDLoginBrowser_C, ApiToken) == 0x000290, "Member 'UUMG_BNIDLoginBrowser_C::ApiToken' has a wrong offset!");
static_assert(offsetof(UUMG_BNIDLoginBrowser_C, LoginPageURL) == 0x0002A0, "Member 'UUMG_BNIDLoginBrowser_C::LoginPageURL' has a wrong offset!");
static_assert(offsetof(UUMG_BNIDLoginBrowser_C, LoginCbPageUrl) == 0x0002B0, "Member 'UUMG_BNIDLoginBrowser_C::LoginCbPageUrl' has a wrong offset!");
static_assert(offsetof(UUMG_BNIDLoginBrowser_C, OnLoginCompleted) == 0x0002C0, "Member 'UUMG_BNIDLoginBrowser_C::OnLoginCompleted' has a wrong offset!");

}

