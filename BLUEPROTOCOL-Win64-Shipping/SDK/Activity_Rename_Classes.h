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
	 * WidgetBlueprintGeneratedClass Activity_Rename.Activity_Rename_C
	 * Size -> 0x0010 (FullSize[0x0378] - InheritedSize[0x0368])
	 */
	class UActivity_Rename_C : public USBUIGuildActivityUMGBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0368(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBRichTextBlock*                                    Rich;                                                    // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void SetActivity_Internal(const struct FGuildActivity& Other);
		void BndEvt__Activity_Rename_Rich_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature(TArray<class FString> Keys, TArray<class FString> Values);
		void ExecuteUbergraph_Activity_Rename(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
