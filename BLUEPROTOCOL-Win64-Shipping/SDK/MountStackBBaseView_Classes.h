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
	 * WidgetBlueprintGeneratedClass MountStackBBaseView.MountStackBBaseView_C
	 * Size -> 0x0391 (FullSize[0x0609] - InheritedSize[0x0278])
	 */
	class UMountStackBBaseView_C : public USBStackBMainViewBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    InAnim;                                                  // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCmnBtn08Effect_C*                                   Btn_Execute;                                             // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         Btn_ShowHint;                                            // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBack01_C*                                        CmnBack01_2;                                             // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBonusLarge_C*                                    CmnBonus;                                                // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Cvs_Dialog;                                              // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Cvs_Execute;                                             // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_229;                                               // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnAnim_LiquidMemoryActive_C*                       LiquidMemory;                                            // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMountStackBResult_C*                                MountStackBResult;                                       // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMyWalletWidget_C*                                   MyWalletWidget;                                          // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UStackBFailedAnimation_C*                            StackBFailedAnimation;                                   // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UStackBNetworkLoadView_C*                            StackBNetworkLoadView;                                   // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UStackBSuccessAnimation_C*                           StackBSuccessAnimation;                                  // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UStackBStepButton_C*                                 Step1;                                                   // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UStackBStepButton_C*                                 Step2;                                                   // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UStackBStepButton_C*                                 Step3;                                                   // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     SW_Animation;                                            // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMountSelect_C*                                      Selector;                                                // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FOwnItemInfo                                        TargetMount;                                             // 0x0318(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		class USelectMaterial_C*                                   MaterialSelect;                                          // 0x0468(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FOwnItemInfo>                                Materials;                                               // 0x0470(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSBStackBUseTicket                                  Ticket;                                                  // 0x0480(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		bool                                                       UseTicket;                                               // 0x0488(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EnumStackBStep                                             Step;                                                    // 0x0489(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YYJR[0x6];                                   // 0x048A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBP_Dialog_C*                                        YnDialog;                                                // 0x0490(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BlockClose;                                              // 0x0498(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UI0C[0x7];                                   // 0x0499(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FOwnItemInfo                                        ResultMount;                                             // 0x04A0(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       ResultSuccess;                                           // 0x05F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NRVT[0x7];                                   // 0x05F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnClose;                                                 // 0x05F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bExecuting;                                              // 0x0608(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void RewindResultAfterBeginStep();
		void RewindResultAfterStep1();
		void ShowResult();
		void HideResult();
		void UpdateStep();
		void UpdateLiquidMemory();
		void GetMaterialUIDs(TArray<class FString>* Uids);
		void GetTickets(TArray<struct FSBStackBUseTicket>* Tickets);
		void InitializeButtons();
		void BndEvt__MountStackBBaseView_Step1_K2Node_ComponentBoundEvent_0_OnSelect__DelegateSignature();
		void OnSelectMount(const struct FOwnItemInfo& ItemInfo);
		void BndEvt__MountStackBBaseView_Step2_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature();
		void OnSelectMaterial(TArray<struct FOwnItemInfo>* Uids, bool UseTicket, const struct FSBStackBUseTicket& StackBTicket);
		void BndEvt__MountStackBBaseView_CmnBack01_1_K2Node_ComponentBoundEvent_6_EventClicked__DelegateSignature();
		void ReselectStep2();
		void OnCloseMountImagineSelectDialog();
		void OnCloseSelectMaterialDialog();
		void ReselectStap1();
		void BndEvt__MountStackBBaseView_Btn_ShowHint_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void OpenStep2();
		void BndEvt__MountStackBBaseView_Btn_Execute_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
		void EventOnBeginSelectMountImagine();
		void EventOnEndSelectMountImagine();
		void EventOnBeginSelectMaterial();
		void EventOnEndSelectMaterial();
		void EventOnBeginExecute();
		void EventOnEndExecute();
		void Construct();
		void Init();
		void Term();
		void OnPushedCancelKey();
		void Close();
		void BindMountStackB();
		void OnCompleteStackB(int32_t RetCode, const struct FOwnItemInfo& Imagine, bool bSuccess);
		void BndEvt__MountStackBBaseView_StackBFailedAnimation_K2Node_ComponentBoundEvent_0_OnAnimPlayed__DelegateSignature();
		void BndEvt__MountStackBBaseView_StackBSuccessAnimation_K2Node_ComponentBoundEvent_1_OnAnimPlayed__DelegateSignature();
		void OnCloseDialog(EDialogResult Result);
		void UnbindMountStackB();
		void OnResultDialogClose(EDialogResult Result);
		void ForceClose();
		void ExecuteUbergraph_MountStackBBaseView(int32_t EntryPoint);
		void OnClose__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
