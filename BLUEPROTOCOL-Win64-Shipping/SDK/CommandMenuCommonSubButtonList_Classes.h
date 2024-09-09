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
	 * WidgetBlueprintGeneratedClass CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C
	 * Size -> 0x0112 (FullSize[0x038A] - InheritedSize[0x0278])
	 */
	class UCommandMenuCommonSubButtonList_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCanvasPanel*                                        CanvasPanel_L;                                           // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_R;                                           // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HorizontalBox_1;                                         // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 SBRuntimeTextBlock_132;                                  // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 SBRuntimeTextBlock_310;                                  // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker;                                               // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClick;                                                 // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class FName>                                        TextIdNameList;                                          // 0x02C0(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		int32_t                                                    FocusButtonId;                                           // 0x02D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_S7J3[0x4];                                   // 0x02D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCommandMenuCommonSubButton_C*                       OldFocusButton;                                          // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCommandMenuCommonSubButton_C*                       FocusButton;                                             // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USBTextTableAsset*                                   TextTable;                                               // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TArray<class FName>                                        TempButtonTextIdList;                                    // 0x02F0(0x0010) Edit, BlueprintVisible
		int32_t                                                    ButtonId;                                                // 0x0300(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Push;                                                    // 0x0304(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_29W9[0x3];                                   // 0x0305(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ButtonId_log;                                            // 0x0308(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Time;                                                    // 0x030C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Search_Id;                                               // 0x0310(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    EntryID;                                                 // 0x0314(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    InputControll_LR;                                        // 0x0318(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PushLR;                                                  // 0x031C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z938[0x3];                                   // 0x031D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASBUIController*                                     UIController;                                            // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKey                                                L1Key;                                                   // 0x0328(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FKey                                                R1Key;                                                   // 0x0340(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FKey                                                L2Key;                                                   // 0x0358(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FKey                                                R2Key;                                                   // 0x0370(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       Pre;                                                     // 0x0388(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LeftJustified;                                           // 0x0389(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void SetButtonAbortAnimandCollapse(int32_t InButtonId);
		void SetBookmarkArrayEnable(TArray<class FString>* BookmarkNameList);
		void SetBookmarkEnable(int32_t InButtonId, bool bEnable);
		void SetButtonText(int32_t ListId, const class FName& Name);
		void ExcramationIconVisible(int32_t ButtonId, bool bIsVisible);
		void InAnimation();
		void PurgeButton(int32_t ButtonId);
		void SetUIBlock(bool bShow);
		void SetButtonEnable(int32_t InButtonId, bool IsButtonEnable);
		void ChangeFocusButton(int32_t InFocusButtonId, bool bSyncCursorPosition);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void CommandMenuCommonSubButton_OnClick(int32_t ButtonId);
		void OnClick_Event_1(int32_t ButtonId);
		void Alpha_Renew2(TArray<class FName> TextIdNameList);
		void Destruct();
		void LRVisibleUpdeta();
		void Bind();
		void CustomEvent_1(ESBPadKeySkinType SkinType);
		void CustomEvent_2();
		void Unbind();
		void ExecuteUbergraph_CommandMenuCommonSubButtonList(int32_t EntryPoint);
		void OnClick__DelegateSignature(int32_t ButtonId);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
