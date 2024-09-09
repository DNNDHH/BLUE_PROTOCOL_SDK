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
	 * WidgetBlueprintGeneratedClass CommunicateSettingMenu_HeaderBG.CommunicateSettingMenu_HeaderBG_C
	 * Size -> 0x00B8 (FullSize[0x0330] - InheritedSize[0x0278])
	 */
	class UCommunicateSettingMenu_HeaderBG_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCmnImageThrobber_C*                                 CmnImageThrobber_2;                                      // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              HeaderBg;                                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        LocationGrp;                                             // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOnlineStatusTag_C*                                  OnlineStatusTag;                                         // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher;                                          // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSlateBrush                                         DefaultHeaderBrush;                                      // 0x02A8(0x0088) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SetData(const class FString& InURL, float InScale, const struct FVector2D& InPosition, class UCanvasPanel* InCanvasPanel);
		void Construct();
		void Reset();
		void SetLocationText(const class FString& LocationName, const class FString& ZoneId, const class FString& ContentId, const struct FSBPlatformInfo& PlatformInfo);
		void SetLocationFollowerUIVisible(bool IsShowPlayerLocationUI);
		void SetOtherLocationText(bool Inactive, const class FString& LocationName, const class FString& ZoneId, const class FString& ContentId, const struct FSBPlatformInfo& PlatformInfo);
		void ErrorDataSet();
		void ExecuteUbergraph_CommunicateSettingMenu_HeaderBG(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
