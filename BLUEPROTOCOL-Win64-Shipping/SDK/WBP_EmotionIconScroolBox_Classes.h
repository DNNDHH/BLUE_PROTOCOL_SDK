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
	 * WidgetBlueprintGeneratedClass WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C
	 * Size -> 0x002C (FullSize[0x02A4] - InheritedSize[0x0278])
	 */
	class UWBP_EmotionIconScroolBox_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UEmotionMenu_Item_C*                                 EmotionMenu_Item;                                        // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGridPanel*                                          Grid_Emotion;                                            // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSelectEmotionItem;                                     // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    EmoteMaxLen;                                             // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetDragableItem(bool InDragable);
		void SetSelectedIcon(class UObject* InSelectedItem);
		void IsEnableEmoteIcon(const class FName& EmoteId, bool* bIsEnable);
		void UpdateEmoteIconEnable();
		void ClearEmotionSlot();
		void RefreshEmotion(TArray<class FString>* InEmotionList);
		void CreateEmotionEmptySlot(int32_t InSlotCount);
		void CreateEmotionIcon(TArray<class FString>* InEmotionList);
		void Destruct_Emotion();
		void Event_OnSelectEmotionItem(class UEmotionMenu_Item_C* InSelectedItem);
		void ExecuteUbergraph_WBP_EmotionIconScroolBox(int32_t EntryPoint);
		void OnSelectEmotionItem__DelegateSignature(class UEmotionMenu_Item_C* InSelectedItem);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
