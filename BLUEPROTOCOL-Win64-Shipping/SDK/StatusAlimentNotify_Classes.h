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
	 * WidgetBlueprintGeneratedClass StatusAlimentNotify.StatusAlimentNotify_C
	 * Size -> 0x0010 (FullSize[0x0368] - InheritedSize[0x0358])
	 */
	class UStatusAlimentNotify_C : public USBStatusAlimentNotifyWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0358(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimInOut;                                               // 0x0360(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash

	public:
		class FText GetTextStatus(const class FName& InTextId);
		void PlayAnimInOut(bool IsForward);
		class UTexture2D* FindIconAssetData(const struct FSBStatusAilmentIconConfig& InStatusAliment, class FName* OutTextID, bool* IsBuff, ESBStatusAilmentPlateType* OutType);
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		void ExecuteUbergraph_StatusAlimentNotify(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
