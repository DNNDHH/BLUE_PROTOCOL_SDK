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
	 * WidgetBlueprintGeneratedClass NotifyScreenshot.NotifyScreenshot_C
	 * Size -> 0x0010 (FullSize[0x0288] - InheritedSize[0x0278])
	 */
	class UNotifyScreenshot_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        MessageList;                                             // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void Construct();
		void AddNotifyMessageItem(class UUserWidget* Widget, class UAkAudioEvent* Sound);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void AddScreenshotCaptured(const class FString& Filename);
		void OnScreenshotCaptured(class UObject* Sender, class UObject* Param);
		void PrepareScreens(class UObject* Sender, class UObject* Param);
		void FinishScreenshot(class UObject* Sender, class UObject* Param);
		void ExecuteUbergraph_NotifyScreenshot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
