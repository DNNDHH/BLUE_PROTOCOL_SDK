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
	 * WidgetBlueprintGeneratedClass DroppingTextRare.DroppingTextRare_C
	 * Size -> 0x0041 (FullSize[0x0309] - InheritedSize[0x02C8])
	 */
	class UDroppingTextRare_C : public USBDroppingTextBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimIn;                                                  // 0x02D0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              Bg1;                                                     // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_3;                                           // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              EffectImage;                                             // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Line1;                                                   // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRichTextBlock*                                    Text;                                                    // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        TextSlot;                                                // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       isRemoved;                                               // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetTextColor(ESBDroppingTextOption Index);
		class FText GetItemIdToText(int32_t ID, EItemType ItemType, bool bUnidentified, bool* IsValid);
		void Construct();
		void Start();
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		void SetMessageTextInItem(EItemType ItemType, int32_t ItemId, int32_t Amount, ESBDroppingTextOption Option, bool bUnidentified, bool bIsBonusAdd);
		void UIVisibleSettingChangeDelegate_Event_1(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
		void Destruct();
		void SetMessageTextInItemName(const class FText& ItemName, int32_t Amount, ESBDroppingTextOption Option);
		void SetMessageTextInFree(const class FText& InText, ESBDroppingTextOption Option);
		void ExecuteUbergraph_DroppingTextRare(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
