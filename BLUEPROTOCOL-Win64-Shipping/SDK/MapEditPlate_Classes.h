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
	 * WidgetBlueprintGeneratedClass MapEditPlate.MapEditPlate_C
	 * Size -> 0x0010 (FullSize[0x0288] - InheritedSize[0x0278])
	 */
	class UMapEditPlate_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBTextKeyIcon_C*                                    TextKey;                                                 // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void SetText();
		void BndEvt__MapEditPlate_TextKey_K2Node_ComponentBoundEvent_0_OnUpdateOperationMode__DelegateSignature();
		void BndEvt__MapEditPlate_TextKey_K2Node_ComponentBoundEvent_1_OnChangePadSkinType__DelegateSignature();
		void BndEvt__MapEditPlate_TextKey_K2Node_ComponentBoundEvent_2_OnUpdateKeyConfig__DelegateSignature();
		void Construct();
		void Destruct();
		void ExecuteUbergraph_MapEditPlate(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
