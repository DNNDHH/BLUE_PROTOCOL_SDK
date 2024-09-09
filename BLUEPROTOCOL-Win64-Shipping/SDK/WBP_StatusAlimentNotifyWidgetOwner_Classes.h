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
	 * WidgetBlueprintGeneratedClass WBP_StatusAlimentNotifyWidgetOwner.WBP_StatusAlimentNotifyWidgetOwner_C
	 * Size -> 0x0009 (FullSize[0x0299] - InheritedSize[0x0290])
	 */
	class UWBP_StatusAlimentNotifyWidgetOwner_C : public USBStatusAlimentNotifyWidgetOwner
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       bCachedVisibility;                                       // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AddProcessing(const struct FSBStatusAilmentIconConfig& InStatusAilmentIconType, class AActor* InOwnerActor);
		void SetSystemVisibility(bool bVisibility);
		void Construct();
		void OnUIVisibleSettingChange(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
		void Destruct();
		void ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
