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
	 * WidgetBlueprintGeneratedClass EquipStatusImaginePowers.EquipStatusImaginePowers_C
	 * Size -> 0x0394 (FullSize[0x060C] - InheritedSize[0x0278])
	 */
	class UEquipStatusImaginePowers_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBRuntimeTextBlock*                                 Txt_Atk;                                                 // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Txt_DP;                                                  // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FOwnItemInfo                                        BaseInfo;                                                // 0x0290(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		struct FImagineParameter                                   CalclatedInfo;                                           // 0x03E0(0x006C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_14NX[0x4];                                   // 0x044C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FOwnItemInfo                                        Prev;                                                    // 0x0450(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		struct FImagineParameter                                   CalclatedPrevInfo;                                       // 0x05A0(0x006C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void SetColorTxt(class USBRuntimeTextBlock* txt, int32_t PrevParam, int32_t afterParam);
		void SetItemInfo(const struct FOwnItemInfo& Info);
		void SetPrevInfo(const struct FOwnItemInfo& Prev);
		void ExecuteUbergraph_EquipStatusImaginePowers(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
