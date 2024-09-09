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
	 * Class MediaIOCore.MediaCapture
	 * Size -> 0x00E0 (FullSize[0x0108] - InheritedSize[0x0028])
	 */
	class UMediaCapture : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnStateChanged;                                          // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PVY4[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMediaOutput*                                        MediaOutput;                                             // 0x0050(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JLAK[0x20];                                  // 0x0058(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextureRenderTarget2D*                              CapturingRenderTarget;                                   // 0x0078(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FEQT[0x88];                                  // 0x0080(0x0088) MISSED OFFSET (PADDING)

	public:
		bool UpdateTextureRenderTarget2D(class UTextureRenderTarget2D* RenderTarget);
		void StopCapture(bool bAllowPendingFrameToBeProcess);
		void SetMediaOutput(class UMediaOutput* InMediaOutput);
		EMediaCaptureState GetState();
		struct FIntPoint GetDesiredSize();
		EPixelFormat GetDesiredPixelFormat();
		bool CaptureTextureRenderTarget2D(class UTextureRenderTarget2D* RenderTarget, const struct FMediaCaptureOptions& CaptureOptions);
		bool CaptureActiveSceneViewport(const struct FMediaCaptureOptions& CaptureOptions);
		static UClass* StaticClass();
	};

	/**
	 * Class MediaIOCore.FileMediaCapture
	 * Size -> 0x0068 (FullSize[0x0170] - InheritedSize[0x0108])
	 */
	class UFileMediaCapture : public UMediaCapture
	{
	public:
		unsigned char                                              UnknownData_XEXD[0x68];                                  // 0x0108(0x0068) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MediaIOCore.MediaOutput
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UMediaOutput : public UObject
	{
	public:
		int32_t                                                    NumberOfTextureBuffers;                                  // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FE98[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	public:
		bool Validate(class FString* OutFailureReason);
		class UMediaCapture* CreateMediaCapture();
		static UClass* StaticClass();
	};

	/**
	 * Class MediaIOCore.FileMediaOutput
	 * Size -> 0x00A0 (FullSize[0x00D0] - InheritedSize[0x0030])
	 */
	class UFileMediaOutput : public UMediaOutput
	{
	public:
		struct FImageWriteOptions                                  WriteOptions;                                            // 0x0030(0x0060) Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FDirectoryPath                                      FilePath;                                                // 0x0090(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              BaseFileName;                                            // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideDesiredSize;                                    // 0x00B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PWO3[0x3];                                   // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIntPoint                                           DesiredSize;                                             // 0x00B4(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverridePixelFormat;                                    // 0x00BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1CSN[0x3];                                   // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EFileMediaOutputPixelFormat                                DesiredPixelFormat;                                      // 0x00C0(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5NUN[0x3];                                   // 0x00C1(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_6TJ1[0xC];                                   // 0x00C4(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
