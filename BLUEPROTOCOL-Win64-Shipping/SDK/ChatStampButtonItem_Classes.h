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
	 * WidgetBlueprintGeneratedClass ChatStampButtonItem.ChatStampButtonItem_C
	 * Size -> 0x005C (FullSize[0x02D4] - InheritedSize[0x0278])
	 */
	class UChatStampButtonItem_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCommonIcon_C*                                       CommonIcon;                                              // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        FloatStampPoint;                                         // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         StampButton;                                             // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    StampId;                                                 // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_EAXI[0x4];                                   // 0x029C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSelect;                                                // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSelectRight;                                           // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsDragable;                                              // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6GEB[0x7];                                   // 0x02C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UChatLogFloatStampIcon_C*                            StampWidgetRef;                                          // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsViewLarger;                                            // 0x02D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsNotPossessed;                                          // 0x02D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CheckValidStamp;                                         // 0x02D2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EUIZOrder                                                  FloatStampOrder;                                         // 0x02D3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetShortcutItemInfo(struct FShortcutItemInfo* OutShortcutItemInfo);
		void SefFloatStampOrder(EUIZOrder InOrder);
		void SetShortcutIcon(const class FString& StampId, bool* IsVisibility);
		void SetLimitedTimeIcon(bool Visible);
		void GetFloatStampPoint(struct FVector2D* OutPos);
		void SetViewLarger(bool InViewLarger);
		void SetPressedSoundId(ESystemSE PressedSystemSEId);
		void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
		struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void SetDragable(bool InDragable);
		void SetIconSelected(bool IsSelected);
		void SetStamp(int32_t InStampId);
		void BndEvt__StampButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
		void Construct();
		void BndEvt__StampButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
		void Destruct();
		void OnChangeCoolTimeStamp(bool IsCoolTime);
		void OnValidStampDelegate_Event_1(bool bValid, int32_t StampId);
		void BndEvt__StampButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_ChatStampButtonItem(int32_t EntryPoint);
		void OnSelectRight__DelegateSignature(int32_t RetStampID, class UChatStampButtonItem_C* InSelectItem);
		void OnSelect__DelegateSignature(int32_t RetStampID, class UChatStampButtonItem_C* InSelectItem);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
