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
	 * WidgetBlueprintGeneratedClass ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C
	 * Size -> 0x0020 (FullSize[0x0320] - InheritedSize[0x0300])
	 */
	class UShortcutRingIcon_Basic_C : public USBShortcutRingIconBasic
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0300(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimPressed;                                             // 0x0308(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCommonIcon_C*                                       CommonIcon;                                              // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UShortcutCoolTime_C*                                 ShortcutCoolTime;                                        // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void OnExecuteError();
		void OnSetVisibleShortcutIcon(bool InVisible);
		void OnSetEnableToolTip(bool InEnable);
		void OnSetCoolTime(bool InIsShow);
		void OnSetGrayOut(bool InGrayOut);
		void OnExecuteSupply(int32_t InItemIndex, ESBItemUseStatus InItemUseStatus);
		void OnExecuteOwnItem(const class FString& InUniqueId, int32_t InItemIndex, ESBItemUseStatus InItemUseStatus);
		void OnSetSupply(int32_t InItemIndex, int32_t InItemAmount);
		void OnSetStamp(const class FString& InStampId);
		void OnSetEmotion(const class FString& InEmotionId);
		void OnSetOwnItem(int32_t InItemIndex);
		void OnClearBP();
		void PlayAnimPressed();
		void ItemUseAfter(int32_t InRetCode, TArray<struct FOwnItemInfo> InDirtyItems);
		void BindOnSaveItemStorage();
		void UnbindOnSaveItemStorage();
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void ExecuteUbergraph_ShortcutRingIcon_Basic(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
