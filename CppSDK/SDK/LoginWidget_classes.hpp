#pragma once

 

// Package: LoginWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DevLoginType_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LoginWidget.LoginWidget_C
// 0x0060 (0x02E0 - 0x0280)
class ULoginWidget_C final : public USBLoginWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUMG_Login_C*                           DevLogin;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_InputAuthToken_C*                  InputAuthToken;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULaunchScreen_C*                        LaunchScreen;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULoginTopWidget_C*                      LoginTopWidget;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnImageThrobber_C*                    Throbber;                                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnLoginCompleted;                                  // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	EDevLoginType                                 LoginType;                                         // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9EA9[0x7];                                     // 0x02C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 AuthToken;                                         // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void OnLoginCompleted__DelegateSignature();
	void ExecuteUbergraph_LoginWidget(int32 EntryPoint);
	void BndEvt__LoginTopWidget_K2Node_ComponentBoundEvent_2_BNOLauncherLoginClicked__DelegateSignature();
	void BndEvt__LoginTopWidget_K2Node_ComponentBoundEvent_0_DevLoginClicked__DelegateSignature();
	void BndEvt__LoginTopWidget_K2Node_ComponentBoundEvent_1_BNIDLoginClicked__DelegateSignature();
	void OnLoginFailure(const int32 InRetCode);
	void OnLoginSuccess();
	void Construct();
	void StartBNIDLogin();
	void OnLoginCompleted_Event_0(const class FString& ApiToken);
	void BndEvt__DevLogin_K2Node_ComponentBoundEvent_1_OnLogin__DelegateSignature(const class FString& EMail, const class FString& Password);
	void OnCheckMaintenanceComplete(const bool bCheckSucess, const bool bIsMaintenance);
	void StartBNOLauncherLogin();
	void BndEvt__InputAuthToken_K2Node_ComponentBoundEvent_0_OnInput__DelegateSignature(const class FString& InAuthToken);
	void Try_Get_Auth_Token_from_Command_Line();
	void OptionServerSavedataLoadRequest();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LoginWidget_C">();
	}
	static class ULoginWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoginWidget_C>();
	}
};
static_assert(alignof(ULoginWidget_C) == 0x000008, "Wrong alignment on ULoginWidget_C");
static_assert(sizeof(ULoginWidget_C) == 0x0002E0, "Wrong size on ULoginWidget_C");
static_assert(offsetof(ULoginWidget_C, UberGraphFrame) == 0x000280, "Member 'ULoginWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULoginWidget_C, DevLogin) == 0x000288, "Member 'ULoginWidget_C::DevLogin' has a wrong offset!");
static_assert(offsetof(ULoginWidget_C, InputAuthToken) == 0x000290, "Member 'ULoginWidget_C::InputAuthToken' has a wrong offset!");
static_assert(offsetof(ULoginWidget_C, LaunchScreen) == 0x000298, "Member 'ULoginWidget_C::LaunchScreen' has a wrong offset!");
static_assert(offsetof(ULoginWidget_C, LoginTopWidget) == 0x0002A0, "Member 'ULoginWidget_C::LoginTopWidget' has a wrong offset!");
static_assert(offsetof(ULoginWidget_C, Throbber) == 0x0002A8, "Member 'ULoginWidget_C::Throbber' has a wrong offset!");
static_assert(offsetof(ULoginWidget_C, UIBlocker) == 0x0002B0, "Member 'ULoginWidget_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(ULoginWidget_C, OnLoginCompleted) == 0x0002B8, "Member 'ULoginWidget_C::OnLoginCompleted' has a wrong offset!");
static_assert(offsetof(ULoginWidget_C, LoginType) == 0x0002C8, "Member 'ULoginWidget_C::LoginType' has a wrong offset!");
static_assert(offsetof(ULoginWidget_C, AuthToken) == 0x0002D0, "Member 'ULoginWidget_C::AuthToken' has a wrong offset!");

}

