#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass LoginWidget.LoginWidget_C
	 * Size -> 0x0060 (FullSize[0x02E0] - InheritedSize[0x0280])
	 */
	class ULoginWidget_C : public USBLoginWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUMG_Login_C*                                        DevLogin;                                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_InputAuthToken_C*                               InputAuthToken;                                          // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULaunchScreen_C*                                     LaunchScreen;                                            // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULoginTopWidget_C*                                   LoginTopWidget;                                          // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnImageThrobber_C*                                 Throbber;                                                // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker;                                               // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnLoginCompleted;                                        // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		EDevLoginType                                              LoginType;                                               // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_D1FA[0x7];                                   // 0x02C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AuthToken;                                               // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void OptionServerSavedataLoadRequest();
		void TryGetAuthTokenfromCommandLine();
		void BndEvt__InputAuthToken_K2Node_ComponentBoundEvent_0_OnInput__DelegateSignature(const class FString& InAuthToken);
		void StartBNOLauncherLogin();
		void OnCheckMaintenanceComplete(bool bCheckSucess, bool bIsMaintenance);
		void BndEvt__DevLogin_K2Node_ComponentBoundEvent_1_OnLogin__DelegateSignature(const class FString& EMail, const class FString& Password);
		void OnLoginCompleted_Event_1(const class FString& ApiToken);
		void StartBNIDLogin();
		void Construct();
		void OnLoginSuccess();
		void OnLoginFailure(int32_t InRetCode);
		void BndEvt__LoginTopWidget_K2Node_ComponentBoundEvent_1_BNIDLoginClicked__DelegateSignature();
		void BndEvt__LoginTopWidget_K2Node_ComponentBoundEvent_0_DevLoginClicked__DelegateSignature();
		void BndEvt__LoginTopWidget_K2Node_ComponentBoundEvent_2_BNOLauncherLoginClicked__DelegateSignature();
		void ExecuteUbergraph_LoginWidget(int32_t EntryPoint);
		void OnLoginCompleted__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
