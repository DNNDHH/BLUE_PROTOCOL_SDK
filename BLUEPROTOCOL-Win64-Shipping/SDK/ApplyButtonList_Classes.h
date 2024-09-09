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
	 * WidgetBlueprintGeneratedClass ApplyButtonList.ApplyButtonList_C
	 * Size -> 0x0291 (FullSize[0x0509] - InheritedSize[0x0278])
	 */
	class UApplyButtonList_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBorder*                                             BorderCannotApply;                                       // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Box_LvSync;                                              // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn01_C*                                         CmnBtn01Matching;                                        // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn01_C*                                         CmnBtn01SoloOrParty;                                     // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn16_C*                                         CmnBtn16PartyList;                                       // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 SBRuntimeTextBlock_47;                                   // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBoxMatching;                                         // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBoxPartyList;                                        // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBoxSoloOrParty;                                      // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClickedSoloOrParty;                                    // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClickedMatching;                                       // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClickedPartyList;                                      // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsCommandMenu;                                           // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1PG4[0x7];                                   // 0x02F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSBMapInfo                                          MapInfo;                                                 // 0x0300(0x01F8) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnClickedHelpMatching;                                   // 0x04F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsSyncRobbon;                                            // 0x0508(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetSyncRibbonPos(bool IsSingleBtn);
		void CheckPartyState(ESBEntryConditionPartyState State, int32_t Need, bool* Ret);
		void CheckClassType(TArray<ESBClassType>* InClass, bool* Ret);
		void CheckClearQuest(TArray<class FName>* InQuest, bool* Ret);
		void SetClickInputAction();
		void UISupportKeyReset();
		void SetErrorText2(const struct FSBMapInfo& SelectedMapInfo, bool isParty, bool* CanApply);
		void SetErrorText(const struct FSBMapInfo& SelectedMapInfo, bool* CanApply);
		void SetupIsEnabled(struct FSBMapInfo* MapInfo);
		void SetupVisibility(bool IsCommandMenu, struct FSBMapInfo* MapInfo);
		void SetupText(struct FSBMapInfo* MapInfo);
		void Setup(bool IsCommandMenu, struct FSBMapInfo* MapInfo);
		void BndEvt__ApplyButtonList_CmnBtn01SoloOrParty_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
		void BndEvt__ApplyButtonList_CmnBtn01Matching_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
		void BndEvt__ApplyButtonList_CmnBtn16PartyList_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature();
		void Construct();
		void Destruct();
		void Event_ReSetups();
		void GetHelpMIssionId();
		void OnIsHelpMatchingMode_Event(bool bWasSuccessful, int32_t RetCode, const class FString& GameContentId);
		void ExecuteUbergraph_ApplyButtonList(int32_t EntryPoint);
		void OnClickedHelpMatching__DelegateSignature(const class FString& MapId, int32_t ModeId);
		void OnClickedPartyList__DelegateSignature();
		void OnClickedMatching__DelegateSignature();
		void OnClickedSoloOrParty__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
