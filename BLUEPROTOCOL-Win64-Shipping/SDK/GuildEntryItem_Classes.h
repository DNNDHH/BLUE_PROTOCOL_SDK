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
	 * WidgetBlueprintGeneratedClass GuildEntryItem.GuildEntryItem_C
	 * Size -> 0x0638 (FullSize[0x08B0] - InheritedSize[0x0278])
	 */
	class UGuildEntryItem_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBButton_C*                                         Btn_Entry;                                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGuildTag_C*                                         GuildTag;                                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Txt_GuildName;                                           // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Txt_LeaderName;                                          // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FGuildEntryData                                     GuildEntryData;                                          // 0x02A0(0x00E0) Edit, BlueprintVisible, ExposeOnSpawn
		class FScriptMulticastDelegate                             OnClicked_GuildEntry;                                    // 0x0380(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FButtonStyle                                        BtnNomal;                                                // 0x0390(0x0278) Edit, BlueprintVisible, DisableEditOnInstance
		struct FButtonStyle                                        BtnSelected;                                             // 0x0608(0x0278) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGuildEntryData_CS                                  GuildEntryData_CS;                                       // 0x0880(0x0030) Edit, BlueprintVisible, ExposeOnSpawn

	public:
		void Construct();
		void BndEvt__Btn_Entry_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void Unselected();
		void Selected();
		void ExecuteUbergraph_GuildEntryItem(int32_t EntryPoint);
		void OnClicked_GuildEntry__DelegateSignature(const struct FGuildEntryData& GuildEntry, class UGuildEntryItem_C* SelectedBtn);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
