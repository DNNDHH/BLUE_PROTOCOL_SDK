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
	 * WidgetBlueprintGeneratedClass Activity_Entry.Activity_Entry_C
	 * Size -> 0x0060 (FullSize[0x03C8] - InheritedSize[0x0368])
	 */
	class UActivity_Entry_C : public USBUIGuildActivityUMGBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0368(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBRichTextBlock*                                    txt;                                                     // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TMap<class FString, class FString>                         Meta;                                                    // 0x0378(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SetActivity_Internal(const struct FGuildActivity& Other);
		void BndEvt__Activity_Entry_Txt_K2Node_ComponentBoundEvent_2_OnLinkClicked__DelegateSignature(TArray<class FString> Keys, TArray<class FString> Values);
		void ExecuteUbergraph_Activity_Entry(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
