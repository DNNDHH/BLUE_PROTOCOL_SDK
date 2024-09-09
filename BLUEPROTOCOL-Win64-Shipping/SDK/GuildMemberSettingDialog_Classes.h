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
	 * WidgetBlueprintGeneratedClass GuildMemberSettingDialog.GuildMemberSettingDialog_C
	 * Size -> 0x02D1 (FullSize[0x0549] - InheritedSize[0x0278])
	 */
	class UGuildMemberSettingDialog_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimOut;                                                 // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimIn;                                                  // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class USBButtonFullScreen_C*                               Btn_OutBorder;                                           // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn16_C*                                         BtnChangeLeader;                                         // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn16_C*                                         BtnKick;                                                 // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn16_C*                                         BtnReport;                                               // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn16_C*                                         BtnRoleChange;                                           // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn16_C*                                         BtnWithDraw;                                             // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGuildMemberManageCBIcon_C*                          CB_AssumeLeader;                                         // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGuildMemberManageCBIcon_C*                          CB_ChangeLeader;                                         // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGuildMemberManageCBIcon_C*                          CB_Kick;                                                 // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGuildMemberManageCBIcon_C*                          CB_WithDraw;                                             // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnClose02_C*                                       CmnClose02;                                              // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBComboBoxCmn01_C*                                  ComboBoxRole;                                            // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CvsWithDraw;                                             // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_102;                                               // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        ManageCB_VB;                                             // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPlayerReport_C*                                     PlayerReport;                                            // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Txt_CharaName;                                           // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_1;                                           // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClosed;                                                // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TMap<class FString, EGuildMemberRole>                      RoleTexts;                                               // 0x0330(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGuildMemberData                                    MemberData;                                              // 0x0380(0x00D8) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       ActivateKick;                                            // 0x0458(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ActivateWithDraw;                                        // 0x0459(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ActivateChangeLeader;                                    // 0x045A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BA4A[0x5];                                   // 0x045B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuildMemberData                                    SelfMemberData;                                          // 0x0460(0x00D8) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       ActivateAssumeLeader;                                    // 0x0538(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsOpen;                                                 // 0x0539(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NL6N[0x6];                                   // 0x053A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUIBlocker_C*                                        SwapBlocker;                                             // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsUGC;                                                  // 0x0548(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void InitBtnReport();
		void DeleteSwapBlocker();
		void CreateSwapBlocker();
		void InitBtnAssumeLeader();
		void InitBtnChangeLeader();
		void InitBtnKick();
		void InitRoleComboBox();
		void IsSelfSelected(bool* bResult);
		void InitBtnwithDraw();
		class UWidget* On_ComboBoxRole_GenerateWidget_1(const class FString& item);
		void UpdateMenuState(bool bKick, bool bLeader, bool bAssumeLeader, bool bWithDraw);
		void IsGuildGrandMaster(bool* Result);
		void IsGuildMaster(bool* Result);
		void InitSelfMemberData();
		void IsCBChecking(bool* Result);
		void UpdateChangeBtn(class UGuildMemberManageCBIcon_C* CheckBox, bool* IsChecked);
		class UWidget* OnComboBoxRoleGenerate(const class FString& item);
		void Initialize();
		class USBPlayerGuildComponent* GetGuildComp();
		void GenerateGuildRole();
		void OnKicked(EDialogResult Result);
		void OnChangeLeader(EDialogResult Result);
		void OnChangeRole(EDialogResult Result);
		void OnCompleteSetting_Event(int32_t RetCode);
		void BndEvt__BtnRoleChange_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature();
		void BndEvt__CmnBtn16_2_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature();
		void BndEvt__BtnChangeLeader_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature();
		void BndEvt__BtnKick_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature();
		void OnWithDrow(EDialogResult Result);
		void BndEvt__GuildMemberSettingDialog_CmnClose02_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature();
		void BndEvt__GuildMemberSettingDialog_CB_RemoveGuild_K2Node_ComponentBoundEvent_6_OnUpdateState__DelegateSignature();
		void BndEvt__GuildMemberSettingDialog_CB_PromoteGuild_K2Node_ComponentBoundEvent_11_OnUpdateState__DelegateSignature();
		void BndEvt__GuildMemberSettingDialog_CB_LeaveGuild_K2Node_ComponentBoundEvent_12_OnUpdateState__DelegateSignature();
		void BndEvt__GuildMemberSettingDialog_ComboBoxRole_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void Close();
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void Open(const struct FGuildMemberData& MemberData);
		void OpenChangeRole();
		void OpenKick();
		void OpenChangeLeader();
		void OpenWithDraw();
		void BndEvt__GuildMemberSettingDialog_CB_AssumeLeader_K2Node_ComponentBoundEvent_3_OnUpdateState__DelegateSignature();
		void OpenAssumeLeader();
		void OnAssumeLeader(EDialogResult Result);
		void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1();
		void BndEvt__GuildMemberSettingDialog_BtnReport_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature();
		void OpenReportUI_Event(bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32_t RetCode);
		void BndEvt__Btn_OutBorder_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void OnClose_FromPlayerReport();
		void ExecuteUbergraph_GuildMemberSettingDialog(int32_t EntryPoint);
		void OnClosed__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
