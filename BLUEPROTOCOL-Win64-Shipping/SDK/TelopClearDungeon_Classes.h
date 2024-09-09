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
	 * WidgetBlueprintGeneratedClass TelopClearDungeon.TelopClearDungeon_C
	 * Size -> 0x0020 (FullSize[0x0328] - InheritedSize[0x0308])
	 */
	class UTelopClearDungeon_C : public USBTelopBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0308(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    InOut;                                                   // 0x0310(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 EffText;                                                 // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Text;                                                    // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		class USBRuntimeTextBlock* GetTextEffect();
		class USBRuntimeTextBlock* GetText();
		void PlaySE(class UAkAudioEvent* SE);
		bool IsPlayAnim();
		void StopAnim();
		void PlayAnim();
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		void ExecuteUbergraph_TelopClearDungeon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
