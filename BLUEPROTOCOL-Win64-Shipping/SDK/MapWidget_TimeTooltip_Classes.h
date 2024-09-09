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
	 * WidgetBlueprintGeneratedClass MapWidget_TimeTooltip.MapWidget_TimeTooltip_C
	 * Size -> 0x0011 (FullSize[0x0289] - InheritedSize[0x0278])
	 */
	class UMapWidget_TimeTooltip_C : public UUserWidget
	{
	public:
		class UImage*                                              Image_1;                                                 // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBDateTimeTextBlock*                                TimeLabel;                                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		E_MapWidget_Tooltip1_TextureTypes                          TooltipTextureType;                                      // 0x0288(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetEndTime(const struct FDateTime& DateTime);
		void SetTooltipTextureType(E_MapWidget_Tooltip1_TextureTypes InType);
		void GetName(class FText* OutName);
		void SetName(const class FText& InText);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
