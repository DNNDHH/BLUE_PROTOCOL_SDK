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
	 * WidgetBlueprintGeneratedClass UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C
	 * Size -> 0x0060 (FullSize[0x02D8] - InheritedSize[0x0278])
	 */
	class UUMG_MatchingMenu_ContentInfo_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Image_107;                                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_MatchingImage_C*                                UMG_MatchingImage;                                       // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_MatchingMenu_Headder_C*                         UMG_MatchingMenu_Headder;                                // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_MatchingMenu_MissionDetail_C*                   UMG_MatchingMenu_MissionDetail;                          // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_MatchingMenu_Term_C*                            UMG_MatchingMenu_Term;                                   // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnCloseButtonClicked;                                    // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClickRewardIcon;                                       // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClickSupplyIcon;                                       // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void SetTerm(const class FName& EventTerm);
		void SetBestScore(int32_t Record, int32_t ClearCount, ESBClassType ClassType, const class FName& MapId);
		void SetCommandMenuMode();
		void SetDungeonInfo(const struct FSBMapInfo& DungeonMapInfo);
		void BndEvt__UMG_MatchingMenu_Headder_K2Node_ComponentBoundEvent_0_OnCloseButtonClicked__DelegateSignature();
		void BndEvt__UMG_MatchingMenu_ContentInfo_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_1_OnClickRewardIcon__DelegateSignature(class UQuestRewardIcon_C* Sender);
		void BndEvt__UMG_MatchingMenu_ContentInfo_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_2_OnClickSupplyIcon__DelegateSignature(const struct FSBDungeonSupply& DungeonSupply);
		void ExecuteUbergraph_UMG_MatchingMenu_ContentInfo(int32_t EntryPoint);
		void OnClickSupplyIcon__DelegateSignature(const struct FSBDungeonSupply& DungeonSupply);
		void OnClickRewardIcon__DelegateSignature(class UQuestRewardIcon_C* Sender);
		void OnCloseButtonClicked__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
