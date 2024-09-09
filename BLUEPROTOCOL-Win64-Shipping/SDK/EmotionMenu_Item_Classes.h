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
	 * WidgetBlueprintGeneratedClass EmotionMenu_Item.EmotionMenu_Item_C
	 * Size -> 0x005B (FullSize[0x02D3] - InheritedSize[0x0278])
	 */
	class UEmotionMenu_Item_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              BgEmpty;                                                 // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButtonCmnIcon01Frame_C*                           Button;                                                  // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommonIcon_C*                                       CommonIcon;                                              // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSelect;                                                // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FString                                              Emotion;                                                 // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       bSelected;                                               // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1WPA[0x7];                                   // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSelectRight;                                           // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsDragable;                                              // 0x02D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       NewVar_1;                                                // 0x02D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CheckValidEmote;                                         // 0x02D2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetShortcutItemInfo(struct FShortcutItemInfo* OutShortcutItemInfo);
		void SetDragable(bool InDragable);
		void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
		struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void SetEmptyBgColor(int32_t ColorType);
		void SetTooptipEnable(bool bEnable);
		void IsSelected(bool* bSelected);
		void SetIconSelected(bool IsSelected);
		void GetEmotion(class FString* OutEmotion);
		void SetEmpty();
		void SetEmotion(const class FString& InEmotion);
		void OnChangeCoolTimeEmotion(bool IsCoolTime);
		void OnValidEmoteDelegate_Event_1(bool bValid, int32_t EmoteId);
		void BndEvt__Button_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature();
		void Destruct();
		void Construct();
		void ExecuteUbergraph_EmotionMenu_Item(int32_t EntryPoint);
		void OnSelectRight__DelegateSignature(class UEmotionMenu_Item_C* InSelectedItem);
		void OnSelect__DelegateSignature(class UEmotionMenu_Item_C* InSelectedItem);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
